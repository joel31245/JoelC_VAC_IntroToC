#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUMCOLS 9

/* Puzzle D17 --  Initialize the diagonals of an NxM array */

int initDiagonals ( int x[][NUMCOLS], int nrows )
{
    // DETERMINE WHICH IS MORE (Rows or Columns)
    int diagVal = nrows;
    if (nrows<NUMCOLS) diagVal = NUMCOLS;

    int r, c, matrixVal;
    for( r=0; r<nrows; r++ ){
        for( c=0; c<NUMCOLS; c++ ){
            // Equation determines distance from diagonal and subtracts that from diagonal Value
            matrixVal = diagVal-abs(r-c);
            x[r][c] = matrixVal;
        }
    }


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

int main(int argc, char *argv[])
{
  const int Nrows = 10 ;

  int x[Nrows][NUMCOLS];

  initDiagonals( x, Nrows );
  print2DArray( x, Nrows  );

  system("pause");
  return 0;
}
