#include <stdio.h>

// rows and collumns need to be declared prior
// Beware of the syntax
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
/*
this array would look like this:
row 0: 1 2 3
row 1: 4 5 6
if you wanted to change the number 5 to whatever number you want you would need
to specify the row and collumns: matrix[1][1] = 16;
*/

int main() {
  printf("Matrix Check; %d\n", matrix[0][2]);
  matrix[1][2] = 5; // value changes from 6 to 5

  // loop through 2D array
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }

  return 0;
}
