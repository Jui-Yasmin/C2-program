#include <stdio.h>
int main()
{
    int i, space, rows, k = 0, j=1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf(" ");
        }

        space = i -2;

        printf("*");

        if (space > 0)
        {
            for(int s = 0; s < space; s++)
            {
                if(i!=rows)
                {
                    printf(" ");
                }
            }
        }

        if (i > 1)
        {
            if(i==rows)
            {
                for(int m = 1; m <= rows-1; m++)
                {
                    printf("*");
                }
            }
            else
            {
                printf("*");
            }
        }


        printf("\n");
    }
    return 0;
}
