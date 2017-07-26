/* Puzzle B13 -- ranCharSentences */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CharPerLINE 50
#define CHAROVERALL 1000
#define MAXLENGTH 5

char randCharLower();
char randCharUpper();

int main(int argc, char *argv[])
{
  char c;

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Generate the random chars and prints them
  int i;
  int wordLength=rand()*MAXLENGTH/RAND_MAX+1;
  int sentenceLength = rand()*MAXLENGTH/RAND_MAX +1;
  int countCharLine = 0;
  int countCharOverall = 0;
  int countWords = 0;
  int randWordCapitalized=0;

  while( countCharOverall<CHAROVERALL ){

    wordLength = rand()*MAXLENGTH/RAND_MAX +1;
    sentenceLength = rand()*MAXLENGTH/RAND_MAX +1;

    if( countWords>sentenceLength ){                    // END OF SENTENCE CONDITION
        printf(". ");
        countCharOverall+=2;
        countWords=0;
    }

    else {                                              // PRINTIN WORDS AND TRACKING Chars, words and inserting the random upper case words
        // Insures char per line stays below 50 without cutting off words midway
        if (wordLength+countCharLine > CharPerLINE){
            printf("\n");
            countCharLine=0;
            countWords-=2;
        }
        else{ // BLOCK OF CODE MAKES EACH WORD
            randWordCapitalized = rand()*25/RAND_MAX+1; // 1 in 25 chance that the word gets capitalized

            printf(" ");
            // Counters updated
            countCharLine++;
            countCharOverall++;

            for( i=0; i<wordLength; i++ ){
                // Check conditions to make uppercase or lowercase
                if( i!=0 )
                    c = randCharLower();
                else if( countWords == 0 || randWordCapitalized==1 )
                    c = randCharUpper();
                printf("%c", c);
                countCharLine++;
                countCharOverall++;
            }

            countWords++;
        } // END OF BLOCK THAT MAKES EACH WORD
    }     // END OF BLOCK THAT MAKES EACH SENTENCE


  } // END OF LOOP

  return 0;
}

char randCharLower(){
    return rand()*(26)/RAND_MAX + 97;
}
char randCharUpper(){
    return rand()*(26)/RAND_MAX + 65;
}
