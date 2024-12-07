#include <stdio.h>

// What is Wild Pointers?
// Uninitialized pointers are known as wild pointers
// These pointers point to some arbitrary location in memory and may cause a program to crash or behave badly.
// Dereferencing wild pointers can cause nasty bugs
// It is suggested to always initialize unused pointers to NULL.

int main()
{
    int a = 645;
    int* ptr; // This is a wild pointer
    // *ptr = 67; // This is not a good way to do
    ptr = &a;  // ptr is no longer a wild pointer
    printf("The value of a is %d\n", *ptr);
    return 0;
}