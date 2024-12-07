#include <stdio.h>

void starPattern(int star, int style)
{
    if (style == 1)
    {
        for (int i = 0; i < star; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    else if (style == 0)
    {
        for (int i = 0; i < star; i++)
        {
            for (int j = 0; j <= star - i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}

int main()
{
    int star, style;
    printf("How Many rows you wanted to print");
    scanf("%d", &star);
    printf("How you wanted to print 0 for opposite and 1 for Normal");
    scanf("%d", &style);
    starPattern(star, style);

    return 0;
}