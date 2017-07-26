#include <stdio.h>
#include <stdlib.h>
#define NUMCOLS 10

/* Puzzle D20 -- fill a 2D array with random ints, without any duplicates
|
|  Return 1 if successful, 0 if not. Failure is guaranteed if there
|  are fewer integers in the range low..high than there are elements
|  in the array.
|
*/
void selectionSort( int arr[], int size );

int randomFill2DUnique( int x[][NUMCOLS], int nrows, int low, int high )
{
    if( nrows*NUMCOLS < (high-low) ) return 0;

    int r,c, length = nrows*NUMCOLS, j;
    int arr[length]; int triggered=1;

    while (triggered == 1){
        // Make 1D array and sort it.
        j=0;
        for( r=0; r<nrows; r++ ){
            for( c=0; c<NUMCOLS; c++ ){
                x[r][c] = (int) (high-low)*(rand()/(RAND_MAX+1))+low;
                arr[j++] = x[r][c];
            }
        }
        selectionSort( x, length );

        // Detect if there are any duplicates
            // Triggered = 1 means there are duplicates
        int r2,c2;
        triggered = 0;
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
    }

    return 1;

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

int numberDuplicates( int x[][NUMCOLS], int nrows )
{
      int r, c;     /* indexes to the current array element */
      int j;        /* index into array[] */
      int array[nrows*NUMCOLS];
      int duplicateCount = 0;
      int inRun = 0;

      /* Copy elements from x[][] to array[] */
      j = 0;
      for ( r=0; r<nrows; r++ )
        for ( c=0; c<NUMCOLS; c++ )
          array[ j++ ] = x[r][c];

      /* Sort the 1D array */
      selectionSort( array, nrows*NUMCOLS );

      /* Scan the 1D array for duplicates */
      for ( j=0; j<nrows*NUMCOLS; j++ )
      {
        if ( !inRun && array[j] == array[j+1] )
        {
          inRun = 1;
          duplicateCount += 2 ;
        }
        else if ( inRun && array[j] == array[j+1] )
          duplicateCount++ ;
        else if ( array[j] != array[j+1] )
          inRun = 0;
      }
      return duplicateCount;
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
      const int low = 0, high = 99;
      int x[Nrows][NUMCOLS] ;

      /* Fill the array with unique random integers */
      srand( time(NULL) );

      if ( randomFill2DUnique( x, Nrows, low, high )==0 )
      {
        printf("Array is larger than range of values\n");
        return 0;
      }

      /* Print the array */
      print2DArray( x, Nrows );
      printf("\nNumber of duplicates: %d\n", numberDuplicates( x, Nrows ) );

      printf("\n");
      return 0;
}
