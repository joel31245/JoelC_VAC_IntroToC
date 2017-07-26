/* Puzzle B04 -- Random Numbers Histogram */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int j; int c[9] = {0,0,0,0,0,0,0,0,0}; int r=0;
  int N = 1000;            /* Print this many random integers */

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Set and count the amount of random numbers between 1 and 9
  for( j=0; j<N; j++ ) {
    r = rand()*9/RAND_MAX ;
    c[r]++;
  }

  // print the histogram
  for( j=0; j<9; j++ )
    printf("%d:\t%d\n", j+1,c[j]);

  return 0;
}
