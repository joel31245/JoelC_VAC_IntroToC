/* Puzzle B11 -- ranChar */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CharPerLINE 10
#define LINES 10

char randChar();

int main(int argc, char *argv[])
{
  char c;

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Generate the random chars and prints them
  int i,j,k, grouping=5;
  for( k=0; k<LINES; k++ ){
      for( i=0; i<CharPerLINE; i++ ){
        for( j=0; j<grouping; j++ ){
            c = randChar();
            printf(" %c", c);
        }
        printf(" "); // END OF EACH GROUPING
      }
      printf("\n");
  }


  // Print with formatting

  return 0;
}

char randChar(){
    return rand()*(26)/RAND_MAX + 65;
}
