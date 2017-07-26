#include <stdio.h>
#include <stdlib.h>

/* Puzzle D15 -- Rotate the elements of a 2D array */
#define NUMCOLS 5
#define NUMROWS 3

void rotate2D ( int x[][NUMCOLS], int nrows, int nShift )
{
    int r, c, rI, cI, index;
    int y[nrows][NUMCOLS];

    for( r=0; r<nrows; r++ ){
        for( c=0; c<NUMCOLS; c++ ){
            y[r][c] = x[r][c];
        }
    }

    for( r=0; r<nrows; r++ ){
        for( c=0; c<NUMCOLS; c++ ){
            index = (r)*NUMCOLS + c +nShift;    // line converts the indexes from row col to 1 large array index

            if( index<(NUMCOLS*NUMCOLS) ){    // unpacks the new 1D array index into a 2D array index with rI cI
                rI = (index - c)/NUMCOLS;
                cI = index%(NUMCOLS);
                x[rI][cI] = y[r][c];
            }
//            else {                               // takes the overspill and refills the 2D matrix from the beginning
//                index-=(NUMCOLS*NUMCOLS);
//                rI = (index - c)/NUMCOLS;
//                cI = index%NUMCOLS;
//                x[rI][cI] = y[r][c];
//            }
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
  int nShift=0;
  while (nShift<=0 || nShift>=NUMCOLS*NUMCOLS){
    printf("Enter in the shift factor (integer): ");
    scanf("%d", &nShift);
  }

  fill2DArray( x, NUMCOLS );
  printf("Original:\n");
  print2DArray( x, NUMCOLS );
  rotate2D( x, NUMCOLS, nShift );
  printf("\n\nRotated:\n");
  print2DArray( x, NUMCOLS  );

  return 0;
}
