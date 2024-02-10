#include <stdio.h>
#include <math.h> 

int main()
{
  double a=1, b=2, c=3;
  double x1, x2, m = 0;
  m = pow(b,2)-4*a*c;
  printf("n = %if\n",m);
  x1 = (-m+sqrt(m))/(2*a);
  x2 = (-m-sqrt(m))/(2*a);
  printf("x1 = %if x2 = %if",x1,x2);
  return 0;
}
