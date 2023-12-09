#include <stdio.h>

int main() {
  int i;

  for (i = 0; i < 30; i++) {
    if (i == 4) {
      continue;
    }
    printf("%d\n", i);
  }

  return 0;
}
