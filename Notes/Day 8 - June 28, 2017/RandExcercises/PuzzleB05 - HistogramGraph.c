/* Puzzle B05 -- Histo Graph */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate();
int findMax( int [], int );
void plot( int [], int, int );

int main(int argc, char *argv[])
{
  int r, j; int c[9];
  for ( j=0; j<9; j++ ) c[j] = 0;
  int N = 100;

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Generate the random numbers and count them up.
  for( j=0; j<N; j++ ) {
    r = generate();
    c[r-1]++;
  }

  // Find the max
  int max = findMax(c,9);

  // Plot and Display
  plot( c,9,max );

  return 0;
}

int generate(){
    return rand()%9+1;
}

int findMax( int arr[], int size ){
    int i;
    int max = 0;
    for( i=0; i<size; i++ )
        if ( arr[i] > max )
            max = arr[i];
    printf("Max: %d\n", max);
    return max;
}

void plot( int arr[], int size, int max ){
    const int maxStars = 10; // max stars that can be printed
    int i,j;
    for( i=0; i<size; i++ ){
        printf(" %d:%d\t", i+1, arr[i] );
        for( j=0; j<=arr[i]*maxStars/max; j++ ) // BREAKS HERE // calculation is a simple ratio comparison
            printf("*");
        printf("\n");
    }
}
