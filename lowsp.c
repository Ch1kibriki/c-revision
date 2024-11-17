
#include <stdio.h>

// Best practice
void checkNull(FILE *filepointer) {
  if (filepointer == NULL) {
    printf("Not able to open file.");
  }
}

int main() {
  FILE *fptr;
  FILE *lptr;
  FILE *wptr;

  // Create File
  fptr = fopen("test.txt", "w");         // write mode
  lptr = fopen("../c-dummy/l.txt", "a"); // append mode
  wptr = fopen("w.txt", "r");            // read mode
  checkNull(fptr);
  checkNull(wptr);
  checkNull(lptr);

  // Write some text to a file
  // Writing to an existing file will clear its contents then write to it
  fprintf(fptr, "Some text");

  // Appends some text to the end
  fprintf(lptr, "\nTake The L");

  // Read file contents and store in char array
  char fileContent[100];
  fgets(fileContent, 100, wptr);
  printf("%s\n", fileContent);

  // Close FIle
  // Best practice to avoid losing data, unnecessary background memory usage and
  // that the file isnt used by a diff program
  fclose(wptr);
  fclose(fptr);
  fclose(lptr);
}
