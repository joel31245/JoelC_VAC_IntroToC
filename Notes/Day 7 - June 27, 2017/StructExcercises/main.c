#include <stdio.h>
#include <stdlib.h>

#define length 5

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb *b )
{
    // print statement not working
    printf("Bulb: %3d watts\t%4d lumens\n", b->watts, b->lumens);
}

int main(int argc, char *argv[])
{
  int i;
  /* declare and initialize an array of Bulb pointers */
  struct Bulb *bptr[length];
  for(i=0; i<length; i++) bptr[i] = NULL;

  /* allocate memory for selected elements of the array */
  for(i=0; i<length; i+=2){
    bptr[i] = (struct Bulb*) malloc( sizeof(struct Bulb) );
    bptr[i]->watts = i*100; bptr[i]->lumens = i*1100;
  }

  /* print the array */
  for(i=0; i<length; i++)
    if( bptr[i] != NULL )
        printBulb( bptr[i] );

  /* deallocate memory for the Bulb */
  for(i=0; i<length; i++)
    if( bptr[i] != NULL )
    free( bptr[i] );

  return 0;
}
