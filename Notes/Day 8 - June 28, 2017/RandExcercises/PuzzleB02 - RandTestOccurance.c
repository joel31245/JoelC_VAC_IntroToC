/* Puzzle B02 -- determine experimentally the amount of times RAND_MAX */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int j;
  int N = 100;            /* Print this many random integers */
  unsigned int seed = time(NULL);   /* Initializer for rand() */

  /* Initialize the random number generator */
  srand( seed );

  int count;
  /* Loop through N*RAND_MAX */
  for( j=0; j<N*RAND_MAX; j++)
    if( rand() == RAND_MAX )
      count++;

  printf("\nRAND_MAX occured %d times in the loop.\n", count);

  return 0;
}
