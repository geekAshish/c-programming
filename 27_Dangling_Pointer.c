#include <stdio.h>
#include <stdlib.h>

// Dangling -- Hanging


int* danglingFunction(){
    int a, b, sum;
    a = 12;
    b = 23;
    sum = a + b;

    return &sum;
}

int main()
{
    // case 1: De-Allocation of a memory block
    int *ptr = (int *) malloc(5*sizeof(int));
    ptr[0] = 12;
    ptr[1] = 13;
    ptr[2] = 14;
    ptr[3] = 15;
    ptr[4] = 16;
    free(ptr);  // ptr is now a dangling pointer


    // Case 2: Function Returing local variable address
    int * dangPtr = danglingFunction(); // dangPtr is now a dangling pointer


    // Case 3: If a variable goes out of scope
    int * danglingPtr;
    {
        int a = 12;
        danglingPtr = &a;
    }
    // Here variable a goes out of scope which means danglingPtr is pointing to a location which is freed and hence danglingPtr is now a dangling pointer







    return 0;
}