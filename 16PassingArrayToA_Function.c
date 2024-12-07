#include <stdio.h>

// Declaring array as a parameter
int func( int array[]) {
    for (int  i = 0; i < 2; i++)
    {
        printf("The value of index %d is %d\n", i, array[i]);
    }
    
    array[0] = 876;  // If you change any value here, it gets reflected in main()

    return 0;
}



// Declaring pointer in the array
int func1( int* pointer) {
    for (int  i = 0; i < 5; i++)
    {
        printf("The value of index %d is %d\n", i, pointer[i]);
        // printf("The value of index %d is %d\n", i, *(pointer + i));
    }

    *(pointer + 1) = 2332; // changed the value at index 1
}

int func2(int arr[2][2]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        printf("The value of index %d and %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    // int arr[] = {6, 5, 9};
    // printf("The address of arr[0] is %d\n", arr);
    // func(arr);

    // printf("The address of arr[0] is %d\n", arr);
    // func1(arr);
    // func1(arr);

    int arr[][2] = {{6, 5}, {4, 7}};
    func2(arr);

    return 0;
}