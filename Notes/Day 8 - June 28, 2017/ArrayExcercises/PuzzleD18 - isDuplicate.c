#include <stdio.h>
#include <stdlib.h>
#define NUMCOLS 10

/* Puzzle D18 -- Determine if any element in a 2D array is duplicated  */

int isDuplicate( int x[][NUMCOLS], int nrows )
{
    int triggered = 0; // 0 is no detected. 1 is we have a detection.
    int r,c, r2,c2;
    int count=0;

    for( r=0; r<nrows; r++ ){
    for( c=0; c<NUMCOLS; c++ ){
                for( r2=0; r2<nrows; r2++ ){
                for( c2=0; c2<NUMCOLS; c2++ ){
                    if( x[r][c] == x[r2][c2] ){ triggered=1; }
                    if( r2==r ) triggered=0;
                    if (triggered==1) break;
                }
                    if (triggered==1) break;
        }
        if (triggered==1) break;
    }
        if (triggered==1) break;
    }
    return triggered;
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
  const int Nrows = 4 ;

  int x[4][10] ={ {  0,  2,  3,  4,  5,  6,  7,  8,  9, 10},
                  { 11, 12, 13, 14, 15, 31, 17, 18, 19, 20},
                  { 21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
                  { 31, 32, 33, 34, 35, 36, 37, 38, 39, 40 } };

  print2DArray( x, Nrows );

  if ( isDuplicate( x, Nrows )==1 )
    printf("There is a duplicate.\n\n");
  else
    printf("There are no duplicates.\n\n");

  system("pause");
  return 0;
}



    int length = nrows*NUMCOLS;
    int arr[length];
    int i, j;
    for( i=0; i<nrows; i++ ){
        for( j=0; j<NUMCOLS; j++ ){
            arr[i*NUMCOLS+j] = x[i][j];
        }
    }

    selectionSort( arr, length );


    int countTrigger, countDuplicate;
    for( i=0; i<length-1; i++ ){
        // INITIAL CASE
        if (i==0){
            if( arr[i] == arr[i+1] ){
                countDuplicate++;
                countTrigger++;
            }
        }
        // NORMAL CASE
        else if ( arr[i] == arr[i+1] ){
            countDuplicate++;
            if( arr[i-1]!=arr[i] ){
                countTrigger++;
            }        }
    }
    return countTrigger+countDuplicate;
