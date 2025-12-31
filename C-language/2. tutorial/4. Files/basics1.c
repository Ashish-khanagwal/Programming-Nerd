#include <stdio.h>


int main() {

  // This is how We Write in a file

  FILE *fP = fopen("Output.txt", "w");
  // FILE -> It is a struct (defined by C library)

  char text[] = "Rock and Roll Soniye\nHeyy!!";
  
  if (fP == NULL) {
    printf("Failed to open file\n");
    return 1;
  }

  fprintf(fP, "%s", text);
  printf("File is succesfuly written\n");

  fclose(fP);

  return 0;
}
