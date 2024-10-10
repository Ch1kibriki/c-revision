#include <stdio.h>

int myNum;
char myChar;

int main() {

  // Charachter and Number Input (Multiple and Single)
  //  Ask for input
  printf("Type a number AND a charachter and press enter: \n");

  // Get and Save the number AND charachter the user types
  scanf("%d %c", &myNum, &myChar);

  // Print the number
  printf("Your number is: %d\n", myNum);

  // Print the charachter
  printf("Your charachter is: %c\n", myChar);

  return 0;
}
