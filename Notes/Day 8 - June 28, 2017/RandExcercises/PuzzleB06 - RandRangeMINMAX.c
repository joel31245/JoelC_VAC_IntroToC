/* Puzzle B06 -- Random Range MIN MAX */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MAX 20
#define MIN 5


int randInt(int, int);

int main(int argc, char *argv[])
{
  int nrows = SIZE; int ncols = SIZE;
  int r,c; int mat[nrows][ncols];
  for ( r=0; r<nrows; r++ )
    for( c=0; c<ncols; c++ )
        mat[r][c] = 0;

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Generate the print random numbers while checking if out of bounds and adding star if it is.
  int max = MAX, min = MIN;
  for ( r=0; r<nrows; r++ )
    for( c=0; c<ncols; c++ )
        mat[r][c] = randInt(max, min);

  // Print with formatting
  for ( r=0; r<nrows; r++ ){
    for( c=0; c<ncols; c++ ){
        printf(" %2d", mat[r][c] );
        if ( mat[r][c]>max || mat[r][c]<min )
            printf("*");
    }
    printf("\n");
  }

  return 0;
}

int randInt(int min, int max){
    return rand()*(max-min)/RAND_MAX + min;
}

