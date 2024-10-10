#include <stdio.h>

int matrix[] = {1, 2, 3, 4, 5, 6};
int mtrLength = sizeof(matrix) / sizeof(matrix[0]);

void getGnomed() { printf("You just got gnomed!\n"); }

int calculateSum(int x, int y) {
  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
  return sum;
}

void loopArray(int arrayNumbers[5], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d\n", arrayNumbers[i]);
  }
}

void printInfo(char name[], int age) {
  printf("Hello %s. You are %d years old. \n", name, age);
}

int main() {

  getGnomed();
  printInfo("Jean", 22);
  calculateSum(10, 15);
  loopArray(matrix, mtrLength);
  int dummy = calculateSum(10, 12);
  printf("Dummy: %d", dummy);
  return 0;
}
