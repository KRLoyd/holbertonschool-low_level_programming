# 0x14.C - File I/O

## Description
To be able to explain the following:
* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call

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

[0-read_textfile.c](0-read_textfile.c)

Function that reads a text file and prints it to the `POSIX` standard output.
* Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
	* @filename: file to read and print
	* @letters: number of letters the function reads and prints
	* Return:
		* Success: the actual number of letters the function read and printed
		* Failure: `0`

[1-create_file.c](1-create_file.c)

Function that creates a file with the permissions `rw-------`. If the file exists, truncate it and do not change the permissions.
* Prototype: `int create_file(const char *filename, char *text_content);`
	* @filename: name of the file to create
	* @text_content: `NULL` terminated string to write to 'filename'.
		* Note: if this value is `NULL`, an empty file is created
	* Returns:
		* Success: `1`
		* Failure: `-1`

[2-append_text_to_file.c](2-append_text_to_file.c)

Function that appends a text at the end of a file.
* Prototype: `int append_text_to_file(const char *filename, char *text_content);`
	* @filename: name of the file to append
	* @text_content: `NULL` terminated string to append to `filename`
		* Note: if `text_content` is `NULL` nothing is added to the file
	* Return:
		* Success: `1`
		* Failure: `-1`

[3-cp.c](3-cp.c)

Program that copies the content from a file to another file.
* Usage: `cp file_from file_to`:
```
kristen@ubuntu:~/0x14. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra 3-cp.c -o cp
kristen@ubuntu:~/0x14. File descriptors and permissions$ cat incitatous
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
kristen@ubuntu:~/0x14. File descriptors and permissions$ ./cp incitatous Incitatous
kristen@ubuntu:~/0x14. File descriptors and permissions$ ls -l Incitatous
-rw-rw-r-- 1 kristen kristen 158 Jun  3 15:39 Incitatous
kristen@ubuntu:~/0x14. File descriptors and permissions$ cat Incitatous
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
kristen@ubuntu:~/0x14. File descriptors and permissions$
```

## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
