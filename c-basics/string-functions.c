#include <stdio.h>
#include <string.h>

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {

  // String Length Methods
  int length = sizeof(alphabet) / sizeof(alphabet[0]);
  printf("%d\n", length); // also counts "null" charachter for byte size
  printf("%lu\n", sizeof(alphabet)); // 27 total bytes(null included)

  printf(
      "%lu\n",
      strlen(alphabet)); // preferred: 26 charachters(null charachter excluded)
  printf("%lu\n", (sizeof(alphabet) -
                   1)); // Also possible to use this without string.h library

  // To Combine/Concatenate Strings
  char str1[20] = "Hello ";
  char str2[] = "World!";

  // Concatenate str2 to str1( result is stored in str1)
  strcat(str1, str2);
  printf("%s\n", str1); // result: Hello World!\


  // Copy str3 to str4
  char str3[20] = "Hello World!";
  char str4[20];
  strcpy(str3, str4);
  printf("%s\n", str4);

  // Compare Strings
  char str5[] = "Hello";
  char str6[] = "Hello";
  char str7[] = "Hi";

  // Compare str1 and str2, and print the result
  printf("%d\n", strcmp(str5, str6)); // Returns 0 (the strings are equal)

  // Compare str1 and str3, and print the result
  printf("%d\n", strcmp(str5, str7)); // Returns -4 (the strings are not equal)

  return 0;
}
