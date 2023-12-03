#include <stdio.h>
int main()
{
    int n=10;
    for(int i=n-1;i>=0;i--) // using n-1, bcz loop is running upto 0
    {
        for(int j=0;j<=i;j++) // using i=space,j=star-number
        {
            if(i==n-1 || j==0 ||i==j)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
    return 0;
}
