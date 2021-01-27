#include <stdio.h>
#include <stdlib.h>

#ifdef __linux
#include <editline/readline.h>
#include <editline/history.h>
#endif

int main(int argc, char** argv){
    puts("Lispy Version 0.0.1");
    puts("Press ctrl+c to exit");

    //never ending loop
    while(1){
        char* input = readline("lispy> ");

        add_history(input);

        printf("No you are a %s\n", input);

        free(input);
    }

    return 0;
}