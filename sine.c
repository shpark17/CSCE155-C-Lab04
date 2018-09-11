/**
 * This program uses a Taylor Series to compute a value
 * of sine.
 *
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/**
 * A function to compute the factorial function, n!.
 */
long factorial(int n) {
  long result = 1, i;
  for(i=2; i<=n; i++) {
    result *= i;
  }
  return result;
}

int main(int argc, char **argv) {

  if(argc != 3) {
    fprintf(stderr, "Usage: %s x n\n", argv[0]);
    exit(1);
  }

  double x = atof(argv[1]);
  int n = atoi(argv[2]);

  double result = 0.0;
  double sum
  //compute sin(x) using a taylor series out to n terms
  double xr = (x/180)*M_PI
    
  for(i=0; i<=n; i++) {
     sum=((pow(xr,i))/(factorial(i));
     result +=sum;

  printf("sin(%f) = %f\n", x, result);

  return 0;
}
