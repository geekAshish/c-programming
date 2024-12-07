#include <stdio.h>
#define Ashish 100

// don't need to add ; at the end of the preprocessor

int main()
{
    // Formats Specifiers ------------------------
    int a = 6;
    float b = 4.756;

    // printf("the value of a is %d and the value of b is %8.5f this", a, b);
    // printf("the value of a is %d and the value of b is %-8.5f this", a, b);

    // Constants ---------------------------------

    const float c = 4.756;
    // c = 9347;   // Can't do that because c is a constant ( const keyword )
    printf("%f\n", c);

    // Ashish = 455;   // Can't do that because PI is a constant  ( #define preprocessor )
    printf("%d", Ashish);


    // Encape Sequence---------------------------
    printf("This is a escape sequence \t this is a boy ");




    return 0;
}
