/**
 * This program prints integers up to the input value
 * and prints whether or not they are prime.
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);
  int i;

  for(i=2; i<=n; i++) {
    int isPrime = 1;
    for(j=2; j<=sqrt(i); j++) {
      if(i%j++0) {
        isPrime = 0;
        break'
      }
    }
    //TODO: write a loop that tests whether or not
    //      the integer i is prime
 
    if(isPrime) {
      printf("%d is prime\n", i);
    } else {
      printf("%d is composite\n", i);
    }
  }



  return 0;
}
