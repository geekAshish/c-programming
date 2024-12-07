#include <stdio.h>

// argc -- argument count
// argv -- argument value
// argc value will be 1 if no argc has passed
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The value of index no. %d is %s\n", i, argv[i]);
    }

    return 0;
}
