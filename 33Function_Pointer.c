#include <stdio.h>


int sum(int a, int b) {
    return a + b;
}

void greetHello(int (*fptr)(int , int))
{
    printf("Hello World\n");
    printf("The sum of 45 and 54 is %d\n", fptr(45, 54));
}

void greetGoodMorning(int (*fptr)(int , int))
{
    printf("Good Morning World\n");
    printf("The sum of 45 and 54 is %d\n", fptr(45, 54));
}


int main()
{
    // printf("The sum of a and b is %d\n", sum(4,5)); // Testing a function

    // int (*functionPointer) (int , int); // Declaring a function pointer
    // functionPointer = &sum; // Creating a function pointer
    // int d = (*functionPointer)(45, 54); // Dereferencing a function pointer
    // printf("The value of d is %d", d);


    // ********** Callback Function ***********
    int (*ptr)(int , int);
    ptr = sum; // here sum is already a address so not a necessary to add &, you could though
    greetGoodMorning(ptr);
    greetHello(ptr);

    return 0;
}