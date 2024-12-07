#include <stdio.h>

int main()
{
    // label:
    //     printf("we are good boy.\n");
    // goto end;
    // goto label;
    // end:
    //     printf("we are good boy.\n");


    // use case of goto statement
    int inputValue;
    for (int i = 0; i < 5; i++)
    {
        printf("this is first loop\n");

        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &inputValue);
            if (inputValue < 10)
            {
                printf("this is inside loop\n");
                goto end;
            }
            
        }
        
    }

    end:

    return 0;
}
