#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d\n", result);
  return 0;
}

// 10 + sum(9)
// 10 + ( 9 + sum(8) )
// The developer should be very careful with recursion as it can be quite easy
// to slip into writing a function which never terminates, or one that uses
// excess amounts of memory or processor power. However, when written correctly,
// recursion can be a very efficient and mathematically-elegant approach to
// programminh
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
