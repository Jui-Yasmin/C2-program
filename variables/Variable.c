#include <stdio.h>
int main() {    

    int x, y, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // calculate the sum
    sum = x + y;      
    
    printf("%d + %d = %d", x, y, sum);
    return 0;
}
