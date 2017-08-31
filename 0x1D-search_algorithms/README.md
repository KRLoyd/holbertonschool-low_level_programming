# 0x1D. C - Search Algorithms

## Description
This folders contains both linear and binary search algorithms as well as answer files to questions posed by Holberton School.

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.04.5 LTS.
Tests and development are done in VirtualBox on Ubuntu via Vagrant(1.8.1).
#### Compilation
All programs and functions are compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
#### Style
All code is written in Betty style. Information about this style can be found [here](https://github.com/holbertonschool/Betty/wiki).

Protoypes of all functions used are included in header file [search_algos.h](search_algos.h).

 
## Files
All files must be executable to run. To add executable permissions to any file: `chmod u+x file_name`.

##### [mains](mains)
Folder to hold the following main files:
* [0-main.c](0-main.c)
	* To test my linear search algorithm.
* [1-main.c](1-main.c)
    * To test my binary search algorithm.

#### [0-linear.c](0-linear.c)
Function that searches for a value in an array of integers using the Linear Search Algorithm.
* Prototype: `int linear_search(int *array, size_t size, int value);`
    * @array: pointer to the first element of the array to search
    * @size: size of the array to search
    * @value: value to search the array for
    * Returns:
        * index where value is found
        * -1 if array is NULL or value is not found

#### [1-binary.c](1-binary.c)
Function that searches for a value in a sorted array of integers using the Binary Search Algorithm.
* Prototype: `int binary_search(int *array, size_t size, int value);`
    * @array: pointer to the first element of the array to search
    * @size: size of the array to search
    * @value: value to search the array for
    * Returns:
        * index where value is found
        * -1 if array is NULL or value is not found

#### [2-O](2-O)
Answer file for the following question:
* What is the time complexity of a basic linear search algorithm in an array of size n?

#### [3-O](3-O)
Answer file for the following question:
* What is the space complexity of a basic linear search algorithm in an array of size n?

#### [4-O](4-O)
Answer file for the following question:
* What is the time complexity of a basic binary search algorithm of an array of size n?

#### [5-O](5-O)
Answer file for the following question:
* What is the space complexity of a basic binary search algorithm of an array of size n?

#### [6-O](6-O)
Answer file for the following question:
* What is the space complexity of this function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
