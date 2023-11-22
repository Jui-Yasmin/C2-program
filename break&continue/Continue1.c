#include <stdio.h>

int main() {
  int i = 0;

  while (i < 16) {
    if (i == 30) {
      break;
    }
    printf("%d\n", i);
    i++;
  }

  return 0;
}
