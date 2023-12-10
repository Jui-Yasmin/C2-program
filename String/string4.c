#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Your name is: ");
    puts(name);    // display string
    return 0;
}
