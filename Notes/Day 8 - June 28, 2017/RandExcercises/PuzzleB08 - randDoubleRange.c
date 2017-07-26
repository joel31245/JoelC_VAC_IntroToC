/* Puzzle B08 -- ranDouble MIN MAX */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10.0
#define MIN 5.0
#define SIZE 30


double randDouble(double, double);

int main(int argc, char *argv[])
{
  double r, min=MIN, max=MAX;
  int n = SIZE;

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Generate the random numbers
  int j;
  for( j=0; j<n; j++ ){
    r = randDouble(min, max);
    // Print with formatting
    printf(" %1.5lf\t", r);
  }

  return 0;
}

double randDouble(double min, double max){
    return rand()*(max-min)/RAND_MAX + min;
}

