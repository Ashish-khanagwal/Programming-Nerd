#include <stdio.h>
#include <string.h>


void safe_strcpy(char *dest, size_t dest_size, const char *src) {
    size_t i;

    if (dest_size == 0) return;

    for (i = 0; i < dest_size - 1 && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    dest[i] = '\0';
}


int main() {
  
  char name[][10] = {"Ashish", "Shruti", "Niyati", "Nitya"};
  int len = sizeof(name) / sizeof(name[0]);
  
  snprintf(name[0], sizeof(name[0]), "%s", "Khanagwal");
  safe_strcpy(name[1], sizeof(name[1]), "khanagwal");
  /* strncpy(name[0], "Khanagwalllll", sizeof(name[0]) - 1); */
  /* name[0][sizeof(name[0]) - 1] = '\0'; */
  printf("%d\n", len);
  for (int i = 0; i < len; i++){
    printf("%s\n", name[i]);
  }

  for (int i = 0; i < len; i++){
    int size_of_each = strlen(name[i]);
    printf("size of %d'th string is %d\n", i, size_of_each);
  }

  char names[4][25] = {0};
  int rows = sizeof(names) / sizeof(names[0]);
  printf("%d\n", rows);

  for (int i = 0; i < rows; i++) {
    printf("Enter the name: ");
    fgets(names[i], sizeof(names[i]), stdin);
    names[i][strcspn(names[i], "\n")] = '\0';
  }

  for (int i = 0; i < rows; i++) {
    printf("%s\n", names[i]);
  }
  
  int max_index = 0;
  int max_len = strlen(names[0]);
  
  for (int i = 0; i < rows; i++){
    int curr_len = strlen(name[i]); 

    if (curr_len > max_len) {
      max_len = curr_len;
      max_index = i;
    }
  }

  printf("Longest string: %s\n", names[max_index]);
  printf("Length: %d\n", max_len);

  return 0;
}
