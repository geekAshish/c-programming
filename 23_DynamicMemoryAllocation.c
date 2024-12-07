#include <stdio.h>
#include <stdlib.h> // Dynamic menory allocation are defined in stdlib.h

// in terminal can check size of the programme  size 21_Unions.exe
// one liner command - gcc 21_Unions.c ; size 21_Unions.exe

// size command will give us size of text segment, data segment, bss segment, dec segment, hex

// Function for Dynamic memory Allocation
// malloc()
// calloc()
// realloc()
// free()
int main()
{
    // using malloc()------------------------------------------
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int));


    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value at index no %d\n\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of index %d is %d\n", i, ptr[i]);
    // }



    // using calloc()
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);
    // ptr = (int *)calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the vlaue at index no %d\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of index %d is %d\n", i, ptr[i]);
    // }


    // using realloc()
    // printf("Enter the new size of the array you want to create\n");
    // scanf("%d", &n);
    // ptr = (int *)realloc(ptr, n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the new vlaue at index no %d\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The new value of index %d is %d\n", i, ptr[i]);
    // }

    // using free
    free(ptr);


    return 0;
}