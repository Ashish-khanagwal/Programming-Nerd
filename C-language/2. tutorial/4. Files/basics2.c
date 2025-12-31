#include <stdio.h>

int main() {
  
  FILE *fP = fopen("Output.txt", "r");
  char buffer[1024] = {0};

  if (fP == NULL) {
    printf("Error, Couldn't open file\n");
  }

  while (fgets(buffer, sizeof(buffer), fP) != NULL) {
    printf("%s", buffer);
  }

  fclose(fP);

  return 0;
}
