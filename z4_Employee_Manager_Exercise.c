#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char a, b;
    char *employee;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the charecters no. in your employee ID\n");
        scanf("%d", &n);
        getchar();
        printf("Enter the vlaue of a");
        scanf("%c", &a);
        getchar();
        printf("Enter the vlaue of b");
        scanf("%c", &b);
        employee = (char *)malloc((n + 1) * sizeof(char)); // because char have 1 extra null
        printf("Enter the employee ID no. at index no. %d\n", i);
        scanf("%s", employee);
        printf("Your employee ID is %s\n", employee);
        free(employee);
    }

    return 0;
}