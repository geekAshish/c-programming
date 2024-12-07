#include <stdio.h>

int main()
{
    printf("Break and continue statement\n");
    
    // Break Statement
    // int i, age;
    // for ( i = 0; i < 10; i++)
    // {
    //     printf("%d\nEnter Your age\n", i);
    //     scanf("%d", &age);
    //     if (age < 20)
    //     {
    //         break;
    //     }
    // }


    // Continue Statement
    int i, age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\nEnter Your Age", i);
        scanf("%d", &age);
        if (age < 10)
        {
            continue;
        }
        
        printf("Ashish is a good boy.\n");
        printf("Ashish is a good boy.\n");
        printf("Ashish is a good boy.\n");
    }
    


    return 0;
}
