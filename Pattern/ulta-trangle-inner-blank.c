#include <stdio.h>
int main()
{
    int space,star,line,rows;
      printf("Number of rows: ");
      scanf("%d", &rows);



    // first loop for printing rows
    for (int star = rows; star >= 1; star--) {


        // second loop for printing similar number in each rows
        for (int line = 1; line <= star; line++) {
            printf("*", star);
        }
         for (space = 1; space <= star - star; --space)
        {
            printf(" ");
        }


        printf("\n");
    }
    return 0;
}
