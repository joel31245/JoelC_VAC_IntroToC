#include <stdio.h>
#include <stdlib.h>

/* Puzzle D13 -- Transposing Array */
#define NUMCOLS 5
#define NUMROWS 5

void transpose ( int x[][NUMCOLS], int nrows )
{
    int r, c;
    int y[nrows][NUMCOLS];

    // populating a temporary array
        //
    for( r=0; r<nrows; r++ ){
        for( c=0; c<NUMCOLS; c++ ){
            y[r][c] = x[r][c];
        }
    }

    for( r=0; r<nrows; r++ ){
        for( c=0; c<NUMCOLS; c++ ){
            x[r][c] = y[c][r];
        }       // END OF LOOPS
    }           // END OF LOOPS




}

void print2DArray ( int x[][NUMCOLS], int nrows )
{
  int r, c;  /* row and column indexes for the array */

  /* Print elements in row major order */
  for ( r=0; r<nrows; r++ )
  {
    for ( c=0; c<NUMCOLS; c++ )
      printf("%3d ", x[r][c]  );
    printf("\n");
  }
}

void fill2DArray ( int x[][NUMCOLS], int nrows )
{
  int r, c, count=0;

  for ( r=0; r<nrows; r++ )
    for ( c=0; c<NUMCOLS; c++ )
      x[r][c]  = count++ ;
}

int main(int argc, char *argv[])
{
  int x[NUMCOLS][NUMCOLS];

  fill2DArray( x, NUMCOLS );
  printf("Original:\n");
  print2DArray( x, NUMCOLS );
  transpose( x, NUMCOLS );
  printf("\n\nTransposed:\n");
  print2DArray( x, NUMCOLS  );

  return 0;
}
