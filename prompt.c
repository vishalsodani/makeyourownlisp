#include <stdio.h>

//static keyword makes this variable local to this file
static char input[2048];

int main(int argc, char** argv){
    puts("Lispy Version 0.0.1");
    puts("Press ctrl+c to exit");

    //never ending loop
    while(1){
        fputs("lispy>", stdout);

        /* read a line of input*/
        fgets(input, 2048, stdin);

        printf("No you are a %s", input);
    }

    return 0;
}