/* Puzzle B03 -- Random Numbers Range */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int j;
  int N = 10;            /* Print this many random integers */

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Print the random numbers within the range of 0 - 9
  for( j=0; j<N; j++ ) printf(" %d\n", rand()*9/RAND_MAX+1);

  return 0;
}
