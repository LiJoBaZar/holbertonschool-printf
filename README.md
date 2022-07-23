# C - _PRINTF();

## Description:

In this project, we create a function called _printf which prints depending on
the format through conversion specifiers (%s, %c, %d, %i, etc...). It is a
recreation of the standard C library printf function from scratch using certain
types of modifiers (Mandatory & Advanced).

    ● Prototipo: int _printf(const char *format, ...);

## Compilation:

To implement the _printf function, you must first compile the files in the
repository.

  main.c:
  
    #include "main.h"
    
    int main(void)
    {
      _printf("Conversion to binary: %binary", 98);
      _printf("Positive number: %d Negative number: %i", 12, -7896);
      _printf("%o %%%", 77);
      _printf("Generation %c\n", 'Z');
      return (0);
    }
  
    $ gcc *.c -o
  
  Output:
    Conversion to binary: 1100010
    Positive Number: 12 Negative Number: -7896
    115 %
    Generation Z

**Returned value:**

_printf returns the number of characters printed (counter). If an error
is encountered, the function returns -1.

## EXAMPLES:

    printf("Color: %s, Número1: %d, Número2: %05d, Hexadecimal: %x, Real:%5.2f.\n", "rojo", 12345, 89, 255, 3.14);

    Output: Color: rojo, Número1: 12345, Número2: 00089, Hexadecimal: ff, Real: 3.14.

The following example shows the usage of printf() function.

    #include "main.h"
    #include <stdio.h>
    
    int main () {
      int ch;
      for( ch = 75 ; ch <= 100; ch++ ) {
        printf("ASCII value = %d, Character = %c\n", ch , ch );
      }
      return(0);
    }
  
  
Output: Let us compile and run the above program to produce the following result:

    ASCII value = 75, Character = K
    ASCII value = 76, Character = L
    ASCII value = 77, Character = M
    ASCII value = 78, Character = N
    ASCII value = 79, Character = O
    ASCII value = 80, Character = P
    ASCII value = 81, Character = Q
    ASCII value = 82, Character = R
    ASCII value = 83, Character = S
    ASCII value = 84, Character = T
    ASCII value = 85, Character = U
    ASCII value = 86, Character = V

    ASCII value = 87, Character = W
    ASCII value = 88, Character = X
    ASCII value = 89, Character = Y
    ASCII value = 90, Character = Z
    ASCII value = 91, Character = [
    ASCII value = 92, Character = \
    ASCII value = 93, Character = ]
    ASCII value = 94, Character = ^
    ASCII value = 95, Character = _
    ASCII value = 96, Character = `
    ASCII value = 97, Character = a
    ASCII value = 98, Character = b
    ASCII value = 99, Character = c
    ASCII value = 100, Character = d
    
## Requirements:

  ● Allowed editors: vi, vim, emacs.
  
  ● All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall.
  
  -Werror -Wextra -pedantic -std=gnu89.
  
  ● All your files should end with a new line.
  
  ● A README.md file, at the root of the folder of the project is mandatory.
  
  ● Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
  
  ● You are not allowed to use global variables.
  
  ● No more than 5 functions per file.
  
  ● In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples.
  
  ● The prototypes of all your functions should be included in your header file called main.h
  
  ● Don’t forget to push your header file.
  
  ● All your header files should be include guarded.
  
  ● Note that we will not provide the _putchar function for this project.
  
  https://github.com/LiJoBaZar/holbertonschool-printf/blob/zero_day/test/FlowChart%20Printf%20Funciton%20(1).png

## Authors:

Johanna Balcazar & David Santiago Arias Lombana C18
