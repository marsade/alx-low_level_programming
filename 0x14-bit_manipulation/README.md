# C - Bit manipulation
## General
- Look for the right source of information without too much help
- How to manipulate bits and use bitwise operators
## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- All your header files should be include guarded
## Files
- 0-binary_to_uint.c
- 1-print_binary.c
- 2-get_bit.c
- 3-set_bit.c
- 4-clear_bit.c
- 5-flip_bits.c
- 100-get_endianness.c
- 101-password
## Tasks
### 0.0
Write a function that converts a binary number to an `unsigned int`.
- Prototype: `unsigned int binary_to_uint(const char *b);`
- where `b` is pointing to a string of `0` and `1` chars
- Return: the converting number, or 0 if
	- there is one or more chars in the string `b` that is not `0` or `1`
	- `b` is `NULL`
### 1.1
Write a function that prints the binary representation of a number.
- Prototype: `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use `malloc`
- You are not allowed to use `%` or `/` operators
```
0
1
1100010
10000000000
10000000001
```
### 2.10
Write a function that returns the value of a bit at a given index.
- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to get
- Returns: the value of the bit at `index` or `-1` if an error occured
### 3.11
Write a function that sets the value of a bit to `1` at a given index.
- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occured
### 4.100
Write a function that sets the value of a bit to 0 at a given index.
- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `` if it worked, or `-1` if an error occurred
### 5.101
Write a function that returns the number of bits you would need to flip to get from one number to another.
- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the `%` or `/` operators
### 6.Endianness
Write a function that checks the endianness.
- Prototype: `int get_endianness(void);`

