#include <stdio.h>

int main()
{
    // do-while loop ------------------------

    // int num, index = 1;
    // scanf("%d", &num);
    // do{
    //     printf("%d\n", index);
    //     index = index + 1;
    // } while (index < num);


    // while loops ------------------------
    // int i;
    // printf("Enter the value\n")
    // scanf("%d", &i);
    // while (i<10)
    // {
    //     printf("%d\n", i);
    //     i += 1;
    // }

    // For  loop ----------------------------
    int num,j=0;
    scanf("%d", &num);
    for (int i = num ; i < 10; i++)
    {
        printf("%d %d\n", i, j);
        j++;
    }
    
    return 0;
}
