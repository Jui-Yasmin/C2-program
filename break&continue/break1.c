#include <stdio.h>

int main() {
  int i;

  for (i = 0; i < 100; i++) {
    if (i == 18) {
      break;
    }
    printf("%d\n", i);
  }

  return 0;
}
