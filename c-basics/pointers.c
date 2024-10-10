#include <stdio.h>

int main() {
  int myAge = 43;    // Variable Declaration
  int *ptr = &myAge; // Pointer Declaration

  // Creating pointers
  //  %p for pointers  & = reference operator
  printf("%p", &myAge); // Outputs a memory adresss. For example: 0x7ffe5367e044
  printf("%d", myAge);  // Outputs actual value: 43
  printf(
      "%p\n",
      ptr); // Output memory adress  of myAge with the pointer(0x7ffe5367e044)

  // Dereference vs Reference
  //  Reference: Output the memory address of myAge with the pointer
  //  (0x7ffe5367e044)
  printf("%p\n", ptr);

  // Dereference: Output the value of myAge with the pointer (43)
  printf("%d\n", *ptr);

  return 0;
}
