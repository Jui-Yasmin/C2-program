#include <stdio.h>

int main()
{
    int myNumbers[3] = {25, 50, 705, 100};

    // Get the value of the second element in myNumbers
    printf("%d\n", *(myNumbers + 1));

    // Get the value of the third element in myNumbers
    printf("%d", *(myNumbers + 2));

    return 0;
}
