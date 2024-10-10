#include <stdbool.h> //Neccesary when using bool
#include <stdio.h>   //input and output setup

int main() {
  // Arithmatic Operators: + - * / % ++ --
  // Assignment Operators: = += -= *=  /= %= &= |= ^= >>= <<=
  // Comparison Operators: == != > < >= <=
  // Logical Operators: && || !
  // Bitwise Operators:

  bool isProgrammingFun = true;
  bool isFishTasty = false;
  int num = 3;

  printf("%d\n", isProgrammingFun);

  if (!isProgrammingFun) {
    printf("option 1\n");
  } else if (isFishTasty) {
    printf("option 2\n");
  } else {
    printf("option 3\n");
  }

  switch (num) {
  case 1:
    printf("case 1\n");
    break;

  case 2:
    printf("case 2\n");
    break;

  case 3:
    printf("case 3\n");
    break;
  default:
    printf("case ?\n");
    // does not need a break
  }

  return 0;
}
