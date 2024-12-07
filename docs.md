1. IDE   Install VS code
2. Compiler -  install MinGW compiler ( Add path )
3. c/c++ Extension   ||  Code Runner Extension


If you wanted to give a name your exe file
gcc .\C_File.c -o codewithharry
.\codewithharry.exe


# Syntax of C programme
- C programme made of diff tokens like
- A token in C can be defined as the smallest individual element of the C programming language that is meaningful to the compiler.

- keywords - general purpose keywords

- Identifiers
These are user-defined words that are used to name variables, functions, and other program elements. For example, my_variable and sum are both identifiers.

- Constants
These are values that cannot be changed during program execution. For example, 10 and 3.14 are both constants.

- Operators
These are symbols that represent operations that can be performed on data. For example, +, -, *, and / are all operators.

- Special characters - symbol
These are symbols that have a special meaning to the compiler. For example, ;, (, and ) are all special characters.

- Strings
These are sequences of characters that are enclosed in double quotes. For example, "Hello, world!" is a string.


#include <stdio.h> // preprocessor statement

programme execution will start from main() funtion
int main() {

  variable declaration
  int a;

  printf("Enter your lucky number.\n");

  scanf("%d", &a);

  printf("Your lucky number is %d", a);

  return 0, will return, 0 to the operting system that our programme run
  successfully
  return 0;
}

can change the .exe file name
gcc fileName.c -o ashish

gcc -wall -save-temps main.c -o ashish

# Dynamic Memory Allocation

A statically allocated variable or array has a fixed size in memory.
and it stored in the Stack

Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.
and it stored in the Heap

In Dynamic memory allocation, the memory is allocated at runtime from the heap segment

