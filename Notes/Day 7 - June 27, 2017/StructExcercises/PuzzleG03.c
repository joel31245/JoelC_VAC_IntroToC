#include <stdio.h>

/* declare the type struct Bulb (Notice the tag) */

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb b )
{
    printf("\nBulb Specs: %d watts %d lumens", b.watts, b.lumens);
}

int main(int argc, char *argv[])
{
  /* declare and initialize two Bulbs */
  struct Bulb a; struct Bulb b;
  a.watts = 100; b.watts = 200;
  a.lumens = 1100; b.lumens = 2200;

  /* print values of both Bulbs */
  printf("\nBulb A: ");printBulb(a);
  printf("\nBulb B: ");printBulb(b);

  return 0;
}
