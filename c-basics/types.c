#include <stdio.h>

const int numero = 1;

int main() {
  int num = 15;
  float floatnum = 5.99;
  char let = 'D';

  printf("%d\n", num);
  printf("%.1lf\n", floatnum);
  printf("%c\n", let);
  printf("%lu\n", sizeof(floatnum));

  /*
  Type sizes
  int 2 or 4 bytes
  Stores whole numbers, without decimals
  float 4 bytes
  Stores fractional numbers, containing one or more decimals. Sufficient for
  storing 6-7 decimal digits double  8 bytes Stores fractional numbers,
  containing one or more decimals. Sufficient for storing 15 decimal digits char
  1 byte Stores a single character/letter/number, or ASCII values

  Format Specifiers
  %d or %i - int
  %f or $F  - float
  %lf - double
  %c  - char
  %s - string
  */

  // Type Conversion

  // Implicit Conversion(Automatic)
  // from int 7  to float
  float numbaSeven = 7;
  printf("%f\n", numbaSeven);

  // Explicit Conversion(Manual Way)
  // from: int to float
  float sum = (float)5 / 2;

  printf("%f\n", sum);

  return 0;
}
