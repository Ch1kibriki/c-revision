#include <stdbool.h>
#include <stdio.h>

int num = 0;

int main() {
  // untill this amount
  while (num <= 5) {
    printf("while: %d\n", num);
    num++;
  }

  do {
    printf("do: %d\n", num);
    num++;
  } while (num <= 5);

  int i;
  // known amount needed
  for (i = 0; i < 10; i++) {
    printf("%d\n", i);
  }

  int x, y;
  for (x = 1; x <= 2; ++x) {
    printf("\nOuter Loop: %d\n\n", x);
    for (y = 1; y <= 3; ++y) {
      printf("Inner Loop: %d\n", y);
    }
  }
  // break; skips to end of Loop
  // continue; skips to next loop itteration

  return 0;
}
