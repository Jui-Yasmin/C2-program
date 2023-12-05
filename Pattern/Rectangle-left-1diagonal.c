#include <stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // inside inner loop print star for first and last rows or for first and last column

            if (i == 1 || i == n || j == 1 || j == n || i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

return 0;
}


