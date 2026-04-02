-- Project --

C - printf | Holberton School

-- Global description --

This project involves recreating the printf function from the standard C language library. Understand how printf works internally: analyse a formatting string, handle different conversions (such as %d, %s, %c, etc.) and display the result on the screen. It manages the conversion of formatted outputs and printing to stdout.

-- The prototype --

int _printf(const char *format, ...);

-- Requirements --

Ubuntu 20.04 LTS

gcc with the flags: -Wall -Werror -Wextra -pedantic -std=gnu89

No global variables

At most 5 functions per file

Betty style compliance

Header file main.h must contain all prototypes

-- Features --

%s - String ; %% - Percent sign ; %d - Decimal integer ; %i - integer And prints characters, strings and integers.

-- Files --

README.md ;  _printf.c - primary function for the parsing ; main.h - Header file functions.c ; - The print functions (%c for char, %s for string, %% for percent) ; print_numbers.c - The print functions (%d, %i for int) ; man_3_printf - Man page of _printf

-- Compilation --

 gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

-- Return Value --

The function returns the number of characters printed (excluding the null byte).

-- Example Usage -- _printf("Hello %s!\n", "world"); _printf("Number: %d\n", 42); _printf("Percent: %%\n");

-- Authors --

Chihaan | adib-commits
