# 0x09. C - argc, argv

## Description
Files in this folder are tasks to become familiar with passing arguments to programs, learning about the two types of `main`, and how to deal with unused parameters.

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.04.5 LTS.
Tests and development are done in VirtualBox on Ubuntu via Vagrant(1.8.1).
#### Compilation
All programs and functions are compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
#### Style
All code is written in Betty style. Information about this style can be found [here](https://github.com/holbertonschool/Betty/wiki).

Protoypes of all functions used are included in header file `holberton.h`


## Files
All files must be executable to run. To add executable permissions to any file: `chmod u+x file_name`

##### [0-whatsmyname.c](0-whatsmyname.c)
Program to print its name, followed by a new line.
* Usage: 
```
    $ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
    $ ./mynameis
    ./mynameis
    $ mv mynameis mynewnameis
    $ ./mynewnameis
    ./mynewnameis
```

#### [1-args.c](1-args.c)
Program that prints the number of arguments passed into it.
* Usage:
```
   $ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
   $ ./nargs
   0
   $ ./nargs hello
   1
   $ ./nargs "hello, world"
   1
   $ ./nargs hello, world
   2
```

#### [2-args.c](2-args.c)
Program that prints all arguments it receives.
* Usage:
```
    $ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
    $ ./args
    ./args
    $ ./args You can do anything, but not everything.
    ./args
    You
    can
    do
    anything,
    but
    not
    everything.
```

#### [3-mul.c](3-mul.c)
Program that multiplies two numbers.
* Usage:
```
    $ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
    $ ./mul 3 4
    12
    $ ./mul 5 0
    0
    $ ./mul -2 7
    -14
    $ ./mul
    Error
```

#### [4-add.c](4-add.c)
Program that adds positive numbers.
* Usage:
```
    $ gcc -Wall -Werror -pedantic -Wextra 4-add.c -o add
    $ ./add 1 1
    2
    $ ./add 1 10 100 1000
    1111
    $ ./add 1 2 3 e 4 5
    Error
    $ ./add
    0
```

#### [100-change.c](100-change.c)
Program that prints the minimum nuber of coins to make change for an amount of money.
* Usage:
```
    $ gcc -Wall -pedantic -Werror -Wextra 100-change.c -o change
    $ ./change
    Error
    $ ./change 10
    1
    $ ./change 100
    4
    $ ./change 101
    5
    $ ./change 13
    3
```


## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
