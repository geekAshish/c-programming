#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter Your Age\n");
    scanf("%d", &age);
    printf("Enter Your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("your age is 3\n");
        switch (marks)
        {
        case 45:
            printf("your marks is 45");
            break;
        
        default:
            printf("your mark is not %d/n");
            break;
        }
        break;
    
    case 13:
        printf("your age is 13\n");
        break;
    
    case 23:
        printf("your age is 23\n");
        break;

    default:
        printf("your age is not 3, 13 or 23\n");
    }

    return 0;
}
