#include  <stdio.h>

void main ( void )
{
  int value;
  int *pv;
  int **ppv;
  int ***pppv;

  value = 32;
  pv = &value;
  ppv = &pv;
  pppv = &ppv;

  printf("value = %d\n", value );
  printf("*pv   = %d\n", *pv );
  printf("*(*ppv) = %d\n", *(*ppv) );
  printf("*(*(*pppv)) = %d\n", *(*(*pppv)) );

  system("pause");
}
