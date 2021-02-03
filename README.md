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


FEB 3rd 2021
====================
http://buildyourownlisp.com/chapter5_languages
Talks about english language and rules - Chomsky observation - One of these was the observation that natural languages are built up of recursive and repeated substructures.

We notice this exact behaviour in programming languages too. In C, the body of an if statement contains a list of new statements. Each of these new statements, could themselves be another if statement

These are sometimes called **re-write** rules because they tell you how one thing can be re-written as something else.

The name given to a set of re-write rules is a **grammar**.

**PARSERS**

- can be built using parser combinators

**why double quotes with include mpc.h**

- <stdlib.h> angular brackets searches the system locations
- angular brackets searches the system locations