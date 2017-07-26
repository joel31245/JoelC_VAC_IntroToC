/* Puzzle B09 -- ranDoubleTarget */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100.0
#define MIN 0.0
#define SIZE 1000
#define TARGET 50

double randDouble(double, double);
double fabs(double);

int main(int argc, char *argv[])
{
  double r, min=MIN, max=MAX;
  int n = SIZE;

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Generate the random numbers
  int j; double closest=MAX, diff=MAX;
  for( j=0; j<n; j++ ){
    r = randDouble(min, max);
    if ( diff > fabs(TARGET-r)){
        diff = fabs(r-TARGET);
        closest = r;
    }

  }

  // Print with formatting
  printf("The closest is %lf:\t%lf", closest, diff);

  return 0;
}

double randDouble(double min, double max){
    return rand()*(max-min)/RAND_MAX + min;
}
double fabs(double input){
    if (input<0) return -input;
    else         return input;
}
