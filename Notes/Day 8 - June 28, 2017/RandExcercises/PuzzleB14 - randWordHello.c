/* Puzzle B15 -- ranWordHello */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAXLENGTH 5

char randCharLower();
int randWord();

int main(int argc, char *argv[])
{
  unsigned int isWord=0, countLoopIterations=0;

  /* Initialize the random number generator */
  srand( time(NULL) );

  // Message to user to prevent user induced crashing
  printf("Thinking...\n");

  // Random words until it works
  while (isWord==0){
    isWord = randWord();
    countLoopIterations++;
  }

  // print the dots
  int amtOfDots = countLoopIterations/100000; int i;
  for( i=0; i<amtOfDots; i++ ) printf(".");
  // print out the amount of times it took
  printf("\nThe amount of times it took to make the word \"hello\" randomly: %d", countLoopIterations);

  return 0;
}

char randCharLower(){
    return rand()*(26)/RAND_MAX + 97;
}
int randWord(){

    char str[6];

    int i;
    for( i=0; i<MAXLENGTH; i++ ){
        str[i] = randCharLower();
    }
    if (strcmp(str, "hello") == 0) return 1;

    return 0;
}
