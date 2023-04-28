# C - Singly linked lists

## Files
- 0-print_list.c
- 1-list_len.c
- 2-add_node.c
- 3-add_node_end.c
- 4-free_list.c
- 100-first.c
- 101-hello_holberton.asm
## Tasks

### Task 0 - Print list 
Write a function that prints all the elements of a `list_t` list.<br>
- Prototype: `size_t print_list(const list_t *h);`
- Return : The number of nodes.
- If `str` is `NULL`, print `[0] (nil)`
- File: <a href="./0-print_list.c"> 0-print_list.c </a> 

### Task 1 - List Length
Write a function that returns the number of elements in a linked `list_t` list. <br>
- Prototype: `size_t list_len(const list_t *h);`
- File: <a href="./1-list_len.c"> 1-list_len.c </a>

### Task 2 - Add node
Write a function that adds a new node at the beginning of a `list_t` list. <br>
- Prototype: `list_t *add_node(list_t **head, const char *str);` 
- Return: The address of the new element, or `NULL` if it failed
- You are allowed to use `strdup`.
- File: <a href="./2-add_node.c"> 2-add_node.c </a>

### Task 3 - Add node at the end
Write a function that adds a new node at the end of a `list_t` list. <br>
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Return: The address of the new element, or `NULL` if it failed.
- `str` needs to be duplicated
- You are allowed to use `strdup`.
- File: <a href="./3-add_node_end.c"> 3-add_node_end.c </a>

### Task 4 - Free list
Write a function that frees a `list_t` list. <br>
- Prototype: `void free_list(list_t *head);`
- File: <a href="./4-free_list.c">4-free_list.c</a>
### Task 5  - The Hare and the Tortoise
Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n`
before the `main` function is executed. <br>
- You are allowed to use `printf` function.
- File: <a href="./100-first.c">100-first.c</a>

### Task 6 - Real programmers can write assembly code in any language
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
- You are only allowed to use `printf` function.
- You are not allowed to use interrupts.
- File: <a href= "./101-hello_holberton.asm">101-hello_holberton.asm </a>
