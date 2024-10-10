#include <stdio.h>

// Best Practice = Uppercase
// Enum is short for enumeration, so LOW in this case would be the number 0 and
// HIGH would be equal to the number 2 If the first value is assigned then the
// next 2 do not need to be assigned
enum Level {
  LOW,
  MEDIUM,
  HIGH,
};

enum Warning {
  NONE = 0,
  POCO = 25,
  TODO = 50,
};

int main() {
  enum Warning testWarning;
  enum Level testVolt = HIGH;
  testWarning = TODO;

  printf("Volt Value: %d\n", testVolt);
  printf("Warning: %d\n", testWarning);

  // TO-DO add switchcase

  switch (testWarning) {
  case NONE:
    printf("Low level\n");
    break;
  case POCO:
    printf("Medium level\n");
    break;
  case TODO:
    printf("High level\n");
    break;
  default:
    printf("Error\n");
  }
  return 0;
}
