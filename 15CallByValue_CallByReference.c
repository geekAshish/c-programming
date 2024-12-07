#include <stdio.h>

void addSubValue( int *aValue, int *bValue) {
    // *aValue of a
    // *bValue of b

    int addValue, suValue;
    addValue = *aValue + *bValue;
    suValue = *aValue - *bValue;
    *aValue = addValue;
    *bValue = suValue;

    return;
}

void changeValue(int* aValue) {
    *aValue = 999;
};

int main()
{
    int a = 35, b = 55;
    printf("%d and %d\n", a, b);
    // &a, &b address of a, b
    addSubValue(&a, &b);
    printf("%d and %d\n", a, b);

    changeValue(&a);
    printf("Value of a has changed %d", a);


    return 0;
}
