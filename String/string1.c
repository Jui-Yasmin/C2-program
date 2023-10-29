#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  greetings[6] = 'J';
  printf("%s", greetings);

  return 0;
}
