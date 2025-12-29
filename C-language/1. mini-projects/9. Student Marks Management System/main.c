#include <stdio.h>
#include <string.h>

float average_marks(int total) {
  return (total / 500.0) * 100;
}

char grade_assignment(float average) {
  if (average >= 95) {
    return 'A';
  } else if (average >= 85 && average < 95) {
    return 'B';
  } else if (average >= 75 && average < 85) {
    return 'C';
  } else {
    return 'D';
  }
}

int main() { 
  printf("Student Marks Management System\n");
  
  char subjects[][100] = {"Science", "Mathematics", "Social Studies", "English", "C language"};
  int total_subjects = sizeof(subjects) / sizeof(subjects[0]);

  char students[][100] = {"Nitya", "Niyati", "Shruti", "Ashish"};
  int total_students = sizeof(students) / sizeof(students[0]);

  int marks[4][5] = {0};
  
  for (int i = 0; i < total_students; i++) {
    int total = 0;
    float average = 0;
    char grade = '\0';
    printf("\nSubject wise record of %s\n", students[i]);
    for (int j = 0; j < total_subjects; j++) {
      printf("Marks Obtained in %s out of 100: ", subjects[j]);
      scanf("%d", &marks[i][j]);

      if (marks[i][j] < 33) {
        printf("\n%s failed in %s this student got %d marks\n", students[i], subjects[j], marks[i][j]);
        printf("%s have to reappear in this subject.\n\n", students[i]);
      }

      total += marks[i][j];
    }
    average = average_marks(total);
    grade = grade_assignment(average);
    printf("Total marks of %s is: %d\n", students[i], total);
    printf("Percentage of %s is %.2f%% and grade is %c\n", students[i], average, grade);
  }

  printf("\n--- MARKS TABLE ---\n");
  for (int i = 0; i < total_students; i++) {
    printf("%s ", students[i]);
    for (int j = 0; j < total_subjects; j++) {
      printf("%d ", marks[i][j]);
    }
    printf("\n");
  }

  return 0;
}
