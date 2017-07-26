/* Puzzle B15 -- ranDotsNStars */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 50

int main(int argc, char *argv[])
{
  int N = LENGTH;
  int mat[N][N];

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Determining the contents of array. Should be 1 in 13 is a star
  int r,c, starDeterminer=0; // if 1 prints star else prints period
  for( r=0; r<N; r++ ){
    for( c=0; c<N; c++ ){
        starDeterminer = rand()*13/RAND_MAX +1;
        if( starDeterminer==1 ) mat[r][c] = 1;
        else                    mat[r][c] = 0;
    }
  }

  // print out the matrix
  for( r=0; r<N; r++ ){
    for( c=0; c<N; c++ ){
        if( mat[r][c] == 1 ) printf("*");
        else                 printf(".");
    }
    printf("\n");
  }

  return 0;
}
