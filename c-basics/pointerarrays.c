#include <stdio.h>

int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  int *ptr = myNumbers;
  int i;

  // Array name is the same as memory adress of the area's first element
  printf("%p\n", myNumbers);     // Same Result
  printf("%p\n", &myNumbers[0]); // Same Result
  // get value of first  element in array
  printf("First: %d\n", *myNumbers);

  // get value of 2nd element
  printf("Second: %d\n", *(myNumbers + 1)); // + 4 bytes

  // get value of 3rd element
  printf("Third: %d\n", *(myNumbers + 2)); // + 8 bytes

  for (i = 0; i < 4; i++) {
    printf("Function Results: %d\n", *(ptr + i));
  }

  /*

This way of working with arrays might seem a bit excessive. Especially with
simple arrays like in the examples above. However, for large arrays, it can be
much more efficient to access and manipulate arrays with pointers.

It is also considered faster and easier to access two-dimensional arrays with
pointers.

And since strings are actually arrays, you can also use pointers to access
strings.

For now, it's great that you know how this works. But like we specified in the
previous chapter; pointers must be handled with care, since it is possible to
overwrite other data stored in memory.
*/
  return 0;
}
