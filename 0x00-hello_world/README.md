# 0x00. C - Hello, World

## Purpose
To be able to explain the following:
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds
* What happens when you type `gcc main.c`
* What is an entry point
* What is `main`
* How to print text using `printf`, `puts`, and `putchar`
* How to get the size of a specific type using the unary operator `sizeof`
* How to compile using `gcc`
* What is the default program name when compiling with `gcc`
* What is the official Holberton C coding style and how to check your code with `betty-style`
* How to find the right header to include in your source code when using a standard libray function
* How does the `main` function influence the return value of the program

### Project Notes
* All files are compiled on Ubuntu 14.04 LTS using `gcc 4.8.4` (`C90`)
* All C code uses `Betty` style. Info on this style can be found at https://github.com/KRLoyd/printf
* ALl shell scripts are 2 lines long. To check, use `$ wc -l file_name`. Output will be 2.

## Tasks
#### 0. Preprocessor
Script that runs a C file thorugh the preprocessor and save results into another file. 
* Notes:
	* C file name is saved in variable `$CFILE`
	* Output will be saved in file `c`
* File: `0-preprocessor`

#### 1. Compiler
Script that generates the assembly code of a C code and save it to an output file. 
* Notes: 
	* C file name is saved in variable `$CFILE`
	* Output file will be named the same as the C file, but with extension `.s` instead of `.c`
* File: `1-compiler`

#### 2. Assembler
Script that compiles a C file, but doesn't link. 
* Notes:
	* C file name is saved in variable `$CFILE`
	* Output file will be named the same as the C file, but with extension `.o` instead of `.c`
* File: `2-assembler`

#### 3. Hello, puts
C program that prints the following using `puts`: `"Programming is like building a multilingual puzzle`
* Note: Program ends with value `0`
* File: `4-puts.c`

#### 4. Name
Script that compiles a C file and creates an executable named `cisfun`
* Note: C file name is saved in variable `$CFILE`
* File: `3-name`

#### 5. Hello, printf
C program to print the following using `printf`: `with proper grammar, but the outcome is a piece of art,`
* Note: Program ends with value `0`
* File: `5-printf.c`

#### 6. Size is not grandeur, and territory does not make a nation
C program that prints the size of various types on the computer it's compiled and run on. 
* Notes:
	* Program returns `0`
	* To test `-m32` `gcc` option, may have to install package `libc6dev-i386`
* File: `6-size.c`

#### 7. What happens when you type gcc main.c
Blog post to explain the steps of `gcc` compilation.
* Blog: https://medium.com/@loydkristen/detective-decoders-episode-2-8a7e29a0656e#.wunm42qfv

#### 8. Intel
Script that generates the assembly code (Intel syntax) of a C code and save it in an output file. 
* Notes:
	* C file is saved in variable `$CFILE`
	* Output file should be the same as the C file, but with extension `.s` instead of `.c`
* File: `100-intel`

#### 9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
C program that prints the following to the standard error: `and that piece of art is useful" - Dora Korpar, 2015-10-19`
* Note: Program returns 1
* File: `101-quote.c`
