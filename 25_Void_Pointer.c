#include <stdio.h>

int main()
{
    int a = 345;
    float b = 4.5;
    void *ptr;
    ptr = &a;
    // printf("The value of a is %d", *ptr); //It is not possible to deference void pointer directly
    printf("The value of a is %d\n", *(  ( int* )ptr  )); // This is right way
    // (int *)malloc(n*sizeof(int)) // here malloc is also returns a void pointer, so we're dereferencing it in int

    ptr = &b;
    // printf("The value of b is %f", *ptr); //It is not possible to deference void pointer
    printf("The value of b is %f\n", *(  ( float* )ptr  )); // This is right way

    return 0;
}