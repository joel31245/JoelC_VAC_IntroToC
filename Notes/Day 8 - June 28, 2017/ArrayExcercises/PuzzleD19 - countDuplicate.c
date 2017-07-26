#include <stdio.h>
#include <stdlib.h>
#define NUMCOLS 10

/* Puzzle D19 -- Count the number of duplicate values in a 2D array of ints */

void selectionSort( int arr[], int size );

int numberDuplicates( int x[][NUMCOLS], int nrows )
{

      int length = nrows*NUMCOLS;
    int arr[length];
    int i, j;
    for( i=0; i<nrows; i++ ){
        for( j=0; j<NUMCOLS; j++ ){
            arr[i*NUMCOLS+j] = x[i][j];
        }
    }

    selectionSort( arr, length );


    int countTrigger, countDuplicate=0;
    for( i=0; i<length-1; i++ ){
        // INITIAL CASE
        if (i==0){
            if( arr[i] == arr[i+1] ){
                countDuplicate+=2;
                printf("countDuplicate+2 %d \t\t", countDuplicate);
            }
        }
        // NORMAL CASE
        else if ( arr[i] == arr[i+1] ){
            countDuplicate++;
            printf("countDuplicate %d \t\t", countDuplicate);
            if( arr[i-1]!=arr[i] ){
                countDuplicate++;
                printf("countDuplicate(trailer) %d \t\t", countDuplicate);
            }
        }
    }
    return countDuplicate;


}

void selectionSort( int arr[], int size )
{
  int pass, j;
  int min, minj;

  for ( pass=0; pass<size-1; pass++ )
  {
    /* find the smallest remaining element in */
    /* arr[pass]... arr[size-1] */
    minj = pass;
    min  = arr[minj];
    for ( j=pass+1; j<size; j++ )
    {
      if ( arr[j] < min )
      {
        min = arr[j];
        minj = j;
      }
    }

    /* swap the smallest remaining element */
    /* with the element in arr[pass] */
    arr[minj] = arr[pass];
    arr[pass] = min;
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
  const int Nrows = 2 ;
  int x[2][NUMCOLS] ={ { 1, 3, 1, 1, 5, 8, -1, 1, 1, 1},
                       { 1, 7, 2, 1, 1, 1, 2, 1, 5, 9} };

  /* Print the array */
  print2DArray( x, Nrows );
  printf("\nNumber of duplicates: %d\n", numberDuplicates( x, Nrows ) );

  printf("\n");
  return 0;
}
