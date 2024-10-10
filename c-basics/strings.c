#include <stdio.h>

// Strings in C are just arrays of single charachters
// This also makes it easier to edit a specific part of a string

int main() {

  // this is how to declare a string in C
  char greetings[] = "Hello World!";
  // Alternatively this is possible:

  char goodbyes[] = {'C', 'i', 'a', 'o', ' ', 'M',
                     'u', 'n', 'd', 'o', '!', '\0'};
  /*Why do we include the \0 character at the end? This is known as the "null
  terminating character", and must be included when creating strings using this
  method. It tells C that this is the end of the string.

  U can use Escape Charachters to add special charachters to your printf
  statement that would usually result in error for example: " ' \
  \' 	' 	Single quote
  \" 	" 	Double quote
  \\ 	\ 	Backslash
  \n 	New Line
  \t 	Tab
  \0 	Null
  */

  printf("This is a test \' \" \\ \n");

  // 1 char = 1 byte
  // length of array = size of array/ size of 1 array element
  int strLength = sizeof(greetings) / sizeof(greetings[0]);
  int i;

  for (int i = 0; i < strLength; i++) {
    printf("%c\n", greetings[i]);
  }

  printf("%s\n", goodbyes);

  return 0;
}
