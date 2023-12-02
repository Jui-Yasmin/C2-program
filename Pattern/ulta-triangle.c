#include <stdio.h>
int main()
{
    int rows;
      printf("Number of rows: ");
      scanf("%d", &rows);

    // first loop for printing rows
    for (int star = rows; star >= 1; star--) {

        // second loop for printing similar number in each rows
        for (int line = 1; line <= star; line++) {
            printf("*", star);
        }
        printf("\n");
    }
    return 0;
}
