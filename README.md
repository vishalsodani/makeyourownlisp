[Documentation for C](https://en.cppreference.com/w/c)

[Using GDB](http://web.archive.org/web/20140910051410/http://www.dirac.org/linux/gdb/)

* To enable line break point compile using -ggdb

```
cc -std=c99 -Wall hello_world.c -o hello_world -ggdb
```

Now, I could do this

gdb ./hello_world
break 7
run and it stops at puts line


* editline for editing on prompt on linux
```
sudo apt-get install libedit-dev

cc -std=c99 -Wall prompt.c -ledit -o prompt


