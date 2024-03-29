
# Project C - printf

## Description of the project
This project is an implementation of the printf function.

## Table of Contents
- Installation
- Command of compilation
- Requirements
- Examples of use of the printf function
- Testing
- Flowchart
- Autors


## Command of compilation
The command to compil the program :
```c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

## Requirements
To compile this program, you'll need Ubuntu 20.04, the GCC compiler, and Git.
## Examples of use of the printf function
```c

#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	sentence = "Hello world !";
	_printf("%s", sentence);
	return (0);
}

stdout: Hellp world !
```
To print a character :
```c

#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
    c = 'A';
    printf("The character is: %c\n", c);
    return (0);
}

stdout: The character is: A
```
## Testing
Explanation of the code:

Step 0: Initially, the _printf function is invoked with a string passed as a parameter using a format specifier. The function always returns 0. Within the function, macros va_list and va_start are employed to handle and initialize the format arguments. Subsequently, a loop iterates through these arguments. A conditional statement verifies whether the argument is a '%'. If affirmative, another loop scrutinizes the subsequent argument against a predefined list of conversion specifiers. Upon finding a match, the corresponding function is invoked (refer to step 1). In the absence of a match, the argument is directly printed. The va_end macros are used to conclude this process.

Step 1: Upon triggering the corresponding function, the argument is conveyed as a parameter. If the argument is a string, the print_string function checks if the string is NULL, and returns 0 if so. Otherwise, it prints the string character by character and returns the count of characters printed.

Valgrind step: Valgrind is a comprehensive tool suite featuring debugging and profiling utilities, invaluable for identifying memory leaks arising from memory allocation.

## Flowchart





![Flowchart](https://github.com/Thomas3300000/holbertonschool-printf/assets/159032920/b04554cb-9e52-43dc-acef-b5fda8b3b377)






## Autors
Thomas Maillard and Ziri Houamdi
