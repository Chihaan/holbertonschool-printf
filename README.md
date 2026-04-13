-- Project --

C - printf | Holberton School

-- Global description --

This project involves recreating the printf function from the standard C language library. Understand how printf works internally: analyse a formatting string, handle different conversions (such as %d, %s, %c, etc.) and display the result on the screen. It manages the conversion of formatted outputs and printing to stdout.

-- The prototype --

int _printf(const char *format, ...);

-- Requirements --

Allowed editors: vi, vim, emacs

All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style

You are not allowed to use global variables

No more than 5 functions per file 

main.c files might be different from the one shown in the examples

The prototypes of all your functions should be included in your header file called main.h

All header files should be include guarded

-- Features --

%s - String ; %% - Percent sign ; %d - Decimal integer ; %i - integer And prints characters, strings and integers.

-- Authorized functions and macros --

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

-- Files --

README.md - The global description of printf project ; _printf.c - Principal function for the parsing ; main.h - Header file ; functions.c - Display functions (print_char, print_string, print_pourcent, print_integer, print_recursive) ; main.c - Test file ; _putchar.c - Utility function

-- Compilation --

 gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

-- Return Value --

The function returns the number of characters printed (excluding the null byte)

-- Authors --

Chihaan | adib-commits
