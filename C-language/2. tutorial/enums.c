#include <stdio.h>

/* enum Day { */
/*   SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, */
/*   THURSDAY = 5, FRIDAY = 6, SATURDAY = 7 */
/**/
/*   // If we do not specify values explicitly then the values will start from 0. */
/* }; */

// We can use typedef as well like this:-

typedef enum {
  SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
  THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;

typedef enum {
  SUCCESS = 1,
  FAILED = 2,
  PENDING = 3
} Status;

void connection_status(Status status);

int main() {

  /* enum Day today = SUNDAY; */
  // Then we don't have to write enum
  Day today = SUNDAY;
  printf("%d\n", today);

  if (today == SUNDAY || today == SATURDAY){
    printf("It's Weekend\n");
  } else {
    printf("It's Weekday\n");
  }

  Status status = PENDING;
  connection_status(status);

  return 0;
}

void connection_status(Status status) {

  switch (status) {
    case SUCCESS:
      printf("Connection is succesful\n");
      break;
    case FAILED:
      printf("Connection was failed\n");
      break;
    case PENDING:
      printf("Connecting..\n");
      break;
  }
}
