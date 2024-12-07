#include <stdio.h>

// # ADVANTAGE OF ARRAYS

// It is used to represent multiple data items of same type by using only single name
// Accessing an item in a given array is very fast!
// 2 Dimensional arrays makes it easy in mathematical applications as it is used to represent a matrix.

// # PROPERTIES OF ARRAY

// Data in an array is stored in contiguous memory locations
// Each element of an array is of same size
// Any element of the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index.


int main()
{
    int age[5];
    age[0] = 33;
    age[1] = 33;
    printf("%d\n", age[0]);
    age[0] = 3399;
    printf("%d\n", age[0]);
    
    // int marks[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the value of %d element\n", i);
    //     scanf("%d", &marks[i]);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The value of element %d is %d\n", i, marks[i]);
    // }

    // Declaration with initialization
    // int marks[5] = {45, 453, 76, 565, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The element of %d is %d\n", i, marks[i]);
    // }
    
    // 2D Array --------------------

    int marks[2][4] = {{3, 4, 5, 6}, {45, 56, 67, 78}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
