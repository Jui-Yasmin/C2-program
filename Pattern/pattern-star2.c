#include <stdio.h>
int main() {
   int i, space, rows, k = 0, j=1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i < rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }

      for(int l=1; l<=j; l++){
        printf("* ");
      }

      j=j+2;

      printf("\n");
   }
   return 0;
}
