#include <stdio.h>

int main()
{
    int a = 4;
    int* ptra = &a;
    // printf("The value of a is %d\n", *ptra);
    // printf("The address of a is %x\n", ptra);
    // printf("The address of pointer( ptra ) is %p\n", &ptra);

    // NULL pointer
    int* ptrNull = NULL;
    printf("This is null pointer %d", ptrNull);

    return 0;
}
