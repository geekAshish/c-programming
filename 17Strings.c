#include <stdio.h>

// void printstr( char str[] ){
//     int i=0;
//     while (str[i]!= '\0')
//     {
//         printf("%c", str[i]);
//         i++;
//     }
// }

int main()
{
    // char name[] = "ashish";
    // char name[7] = "ashish";
    // char name[] = {'a', 's', 'h', 'i', 's', 'h', '\0'};

    // Printing string using %s
    // printf("%s", name);

    // Printing string using custom function
    // printstr(name);

    char str[45];

    // You can get string as input
    // gets() has been removed from c11, It's now deprecated
    gets(str);

    printf("using printf %s\n", str);

    printf("using puts: \n");
    puts(str);

    // scanf, you take whitespaces using scanf, instead use gets
    // After gets is deprecated - use You can use fgets or gets_s (google It)

    return 0;
}
