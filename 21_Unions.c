#include <stdio.h>
#include <string.h>

union ashishUnion
{
    int a;
    char b;
    char c[85];
} au;

int main()
{
    au.b = 'a';
    strcpy(au.c, "AshishKushwaha");
    au.a = 455;

    printf("%d\n", au.a);
    printf("%c\n", au.b);
    printf("%s\n", au.c);
    return 0;
}