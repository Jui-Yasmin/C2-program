#include <stdio.h>

int main()
{
    int myNumbers[5] = {205, 50, 705, 100,44,54};
    int *ptr = myNumbers;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}
