#include <stdio.h>
#include <string.h>

/*
Structures (also called structs) are a way to group several related variables
into one place. Each variable in the structure is known as a member of the
structure. Unlike an array, a structure can contain many different data types
(int, float, char, etc.).
*/

struct testCar {     // Structure Declaration
  int modelNumber;   // member
  char carGrade;     // member
  char carModel[30]; // member
};

int main() {
  // Create structure variable of testCar called carA/ Alternative Method for
  // carB
  struct testCar carA;
  struct testCar carB = {12, 'A', "Miata"};
  struct testCar carC;

  // Assign Values to members of struct variable carA
  carA.carGrade = 'S';
  carA.modelNumber = 0512;

  // carA.carModel = "Ferrari";      This is not possible, instead....
  strcpy(carA.carModel, "Aventador");

  // Copying a structure is as simple as
  carC = carA;

  // Print the value
  printf("Car Model A: %s\n", carA.carModel);
  printf("Car Model B: %s\n", carB.carModel);

  // Modifying is the same as assigning
  // As such it wil work like
  carC.carGrade = 'C';
  strcpy(carC.carModel, "Shitbox");

  printf("Car Model C: %s\n", carC.carModel);

  return 0;
}
