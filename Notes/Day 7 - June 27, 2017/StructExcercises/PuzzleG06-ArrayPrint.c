#include <stdio.h>

struct Bulb
{
  int watts;
  int lumens;
};

#define length 10

/* function to print the array */
void printArray( struct Bulb b[], int n )
{
    int i;
    for(i=0; i<n; i++)
        printf("\nBulb %d: %3d watts %4d lumens", i+1, b[i].watts, b[i].lumens);
}

int main(int argc, char *argv[])
{
  /* declare and initialize an array of length Bulbs */
  struct Bulb b[length];
  int i;
  for(i=0; i<length; i++){
    b[i].watts = i*100;
    b[i].lumens = i*1000+i*100;
  }

  /* print the array */
  printArray( b, length );


  return 0;
}
