/* Puzzle B12 -- ranChar */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CharPerLINE 50
#define WORDS 100
#define MAXLENGTH 10

char randChar();

int main(int argc, char *argv[])
{
  char c;

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Generate the random chars and prints them
  int i;
  int word=rand()*MAXLENGTH/RAND_MAX+1;
  int countChar = 0;
  int countWords = 0;

  while( countWords<WORDS ){

    word = rand()*MAXLENGTH/RAND_MAX +1;

    // Insures char per line stays below 50 without cutting off words midway
    if (word+countChar > CharPerLINE){
        printf("\n");
        countChar=0;
    }
    else{
        for( i=0; i<word; i++ ){
            c = randChar();
            printf(" %c", c);
            countChar++;
        }
        printf("  "); // END OF EACH WORD
        countChar+=2;
        countWords++;
    }

  } // END OF LOOP

  return 0;
}

char randChar(){
    return rand()*(26)/RAND_MAX + 97;
}
