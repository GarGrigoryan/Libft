*This project has been created as part of the 42 curriculum by gargrigo.*

# Libft

## Description

Libft is a custom C library that reimplements a subset of standard C library functions along with additional utility functions. The goal of this project is to understand the inner workings of fundamental C library functions by implementing them from scratch, without relying on existing library implementations.

This library provides essential functions for string manipulation, memory management, character classification, type conversion, and linked list operations. It serves as a foundation for future 42 projects, where students will use this library instead of standard library functions.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This will create a static library file named `libft.a`.

### Installation

No installation is required. Simply include the `libft.h` header file in your project and link against `libft.a` when compiling your programs.

### Usage

Include the header in your source code:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc your_program.c -L. -lft
```

### Make Targets

- `make` - Build the library
- `make clean` - Remove object files (`.o` files)
- `make fclean` - Remove object files and the library (`libft.a`)
- `make re` - Rebuild the library from scratch (equivalent to `fclean` followed by `make`)

## Library Description

Libft consists of various functions which are listed below.

### Mandatory Functions

**Character Classification (ctype.h equivalents):**
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

**String Functions (string.h equivalents):**
- `ft_strlen` - Calculate string length
- `ft_strlcpy` - Copy string with size limit (safer than strcpy)
- `ft_strlcat` - Concatenate string with size limit (safer than strcat)
- `ft_strchr` - Locate first occurrence of character in string
- `ft_strrchr` - Locate last occurrence of character in string
- `ft_strncmp` - Compare two strings up to n characters
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate string

**Memory Functions (string.h equivalents):**
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero out memory block
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlapping)
- `ft_memchr` - Locate byte in memory block
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero-initialize memory

**Additional String Functions:**
- `ft_substr` - Extract substring from string
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Remove specified characters from string ends
- `ft_split` - Split string into array of strings by delimiter
- `ft_strmapi` - Apply function to each character of string with index
- `ft_striteri` - Apply function to each character of string with index (modifies in place)

**Type Conversion:**
- `ft_atoi` - Convert string to integer
- `ft_itoa` - Convert integer to string

**File Descriptor Output:**
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string followed by newline to file descriptor
- `ft_putnbr_fd` - Output integer to file descriptor

### Linked Lists

**Structure:**
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

**Functions:**
- `ft_lstnew` - Create new list node
- `ft_lstadd_front` - Add node to beginning of list
- `ft_lstadd_back` - Add node to end of list
- `ft_lstsize` - Count nodes in list
- `ft_lstlast` - Get last node of list
- `ft_lstdelone` - Delete single node
- `ft_lstclear` - Delete entire list
- `ft_lstiter` - Apply function to each node
- `ft_lstmap` - Create new list by applying function to each node

All functions follow the same behavior and return values as their standard library equivalents, ensuring compatibility and predictable behavior.

## Resources

### Documentation
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Kernighan & Ritchie
- [man pages](https://man7.org/linux/man-pages/) - Linux manual pages for standard C functions

### References
- [C Standard Library Reference](https://en.cppreference.com/w/c/header)
- [Understanding Memory Management in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [String Handling in C](https://www.tutorialspoint.com/c_standard_library/string_h.htm)
- [Linked Lists Tutorial](https://www.learn-c.org/en/Linked_lists)

### AI Usage

AI was used in the following parts of this project:

- **README.md creation**: AI assistance was used to structure and write the README.md file according to 42 School requirements, including formatting and section organization.

- **Code review and debugging**: AI tools were consulted for debugging assistance when encountering compilation errors or logical issues in function implementations, particularly for edge cases and memory management.

All code implementations were written manually by the student, with AI used only for debugging assistance and understanding requirements.
