#include <stdio.h>

int main()
{
    // char a = 5;
    // char* ptra = &a;
    // printf("%d\n", ptra++);
    // printf("%d\n", ptra);
    // printf("%d\n", ptra+1);

    int arr[] = {23, 4, 45, 65, 65};
    int *ptr = arr;

    // printf("The address of first element of the array is %d\n", &arr[0]);
    // printf("The address of first element of the array is %d\n", arr);
    // printf("The value of second element of the array is %d\n", *arr);

    // printf("The address of second element of the array is %d\n", &arr[1]);
    // printf("The address of second element of the array is %d\n", arr+1);
    // printf("The value of second element of the array is %d\n", *(arr+1));
    // arr--; This line will throw an error, arr is a constant
    // ptr--;

    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", arr[0]);

    printf("The value at address of first element of the array is %d\n", *ptr);
    printf("The value at address of first element of the array is %d\n", ptr);

    printf("The value at address of first element of the array is %d\n", *(arr));

    printf("The value at address of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of second element of the array is %d\n", *(arr+1));



    return 0;
}