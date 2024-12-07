#include <stdio.h>
#include <string.h>

// int array( int *arrayValue ) {
//     for (int i = 0; i < 7; i++)
//     {
//         printf("%d", arrayValue[i]);
//     }
//     return 0;
// }
int arrayRev( int *arrayValue ) {
    for (int i = 6; i > -1; i--)
    {
        printf("%d", arrayValue[i]);
    }
    return 0;
}

int main()
{
    // char s1[] = "this_is_good";
    // char s2[] = "zoom_next";
    // char s3[6];
    
    // puts(strcat(s1, s2));
    // printf("%s\n",strcat(s1, s2));
    // printf("The length of string s1 is : %d\n", strlen(s1));
    // printf("The reverse value of s1 is : %s\n", strrev(s1));
    // strcpy(s3, s2);
    // puts(s3);
    // printf("The strcmp for s1, s2 returned %d", strcmp(s1, s2));

    // sr = strcat(s1, s2) // can't do this
    // strcpy(s3, strcat(s1, s2)); can do this

    // Exercise 1
    // char yourName[10];
    // char favorite[10];
    // printf("Enter your First Name\n");
    // scanf("%s", &yourName);
    // printf("Enter your Favorite Things\n");
    // scanf("%s", &favorite);
    // printf("%s favorite is %s", yourName, favorite);

    // Exercise 2
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // array(arr);
    // printf("The reverse version of array is %d", arr);
    arrayRev(arr);


    return 0;
}