#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

  double a = 25;
  a = sqrt(a);
  printf("%f\n", a);

  int b = 4;
  b = pow(b, 3);
  printf("%d\n", b);
  
  /*
  abs() is a standard library function, but not in <stdio.h>.
  It is declared in:
  #include <stdlib.h>
  */ 

  int n = -45;
  printf("%d\n", abs(n));
  
  double d = -5.43;
  printf("%f\n", fabs(d));

  double x = 4.6;
  printf("%f\n", floor(x));
  printf("%f\n", ceil(x));
  printf("%f\n", round(x));

  /*
   M_PI is a common preprocessor macro used in programming, 
   primarily in C and C++, to represent the mathematical constant 
   Pi (approximately 3.14159265359)

   M_PI_2: (pi / 2)
   M_PI_4: (pi / 4)
   M_1_PI: (1 / pi )
   M_2_PI: (2 /pi)
   M_E: The base of natural logarithms (e) 

   C uses radians, not degrees.
  */ 
  double angle = M_PI_2;
  printf("%f\n", sin(angle));

  printf("%f\n", log(10));

  printf("%d\n", 5 / 2);
  printf("%f\n", 5 / 2.0);

  return 0;
}
