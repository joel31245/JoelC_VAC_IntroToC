#include <stdio.h>

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb b )
{
    printf("\nBulb Specs: %3d watts %4d lumens", b.watts, b.lumens);
}

int main(int argc, char *argv[])
{
  /* declare an array of 10 Bulbs */
  struct Bulb b[10];

  /* zero all Bulbs */
  int i;
  for(i=0; i<10; i++){
    b[i].watts = 0;
    b[i].lumens = 0;
  }

  /* initialize several Bulbs */
  for(i=0; i<10; i++){
    b[i].watts = i*100;
    b[i].lumens = i*100+i*1000;
  }

  /* print values of Bulbs */
  for(i=0; i<10; i++){
    printBulb(b[i]);
  }

  return 0;
}
