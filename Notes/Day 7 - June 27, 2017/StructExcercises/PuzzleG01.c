#include <stdio.h>
void PuzzleG01();

struct
{
  int watts;
  int lumens;
} bulbA;

int main(int argc, char *argv[])
{
  /* set values for bulbA */
  bulbA.watts = 100;
  bulbA.lumens = 1710;

  /* print values of bulbA */
  printf("BulbA has %d watts and %d lumens.\n", bulbA.watts, bulbA.lumens);


  return 0;
}
