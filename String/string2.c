#include <stdio.h>

int main() {
  char greetings[] = "Hello World!""Hello World!""Hello World!";
  greetings[13] = 'J';
  printf("%s", greetings);

  return 0;
}
