#include <stdio.h>
// Declaration and elements
int lotNumbers[] = {28, 37, 115, 82};
// Declaration, then elements
// int myNumbers[4];
// myNumbers[1] = 12; etc,

int main() {
  int i;
  for (i = 0; i < 4; ++i) {
    printf("%d\n", lotNumbers[i]);
  }
  // Should output 16 since a single integer is 4 bytes. 4 x 4 =
  printf("size of: %lu\n", sizeof(lotNumbers));

  return 0;
}
