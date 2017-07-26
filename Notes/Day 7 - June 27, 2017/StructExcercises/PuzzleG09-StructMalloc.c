#include <stdio.h>
#include <stdlib.h>

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb *b )
{
  printf("\nBulb: %3d watts\t%4d lumens\n", b->watts, b->lumens);
}

int main(int argc, char *argv[])
{
  /* declare and initialize a Bulb pointer */
  struct Bulb *bptr;

  /* allocate memory for the Bulb */
  bptr = (struct Bulb*) malloc( sizeof(struct Bulb) );
  bptr->watts = 100; bptr->lumens = 1000;


  /* print the Bulb */
  printBulb(bptr);

  /* deallocate memory for the Bulb */
  free (bptr);

  return 0;
}
