#include <stdio.h>

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb *b )
{
    printf("%3d watts\t%4d lumens\n", b->watts, b->lumens);
}

void dimBulb( struct Bulb *b )
{
    b->watts-=20;
    b->lumens-=120;
}

int main(int argc, char *argv[])
{
  /* declare and initialize a Bulb array */
  #define length 5
  struct Bulb lights[length] = { {100,1710}, {60,1065}, {100,1530}, {40,505}, {75,830} };

  /* print the Bulbs */
  int i;
  for(i=0; i<length; i++)
    printBulb(&lights[i]);

  /* decrease light output of each Bulb */
  for(i=0; i<length; i++)
    dimBulb(&lights[i]);

  printf("\nBulb Specs after dimmer.\n");
  /* print the Bulbs */
  for(i=0; i<length; i++)
    printBulb(&lights[i]);

  return 0;
}
