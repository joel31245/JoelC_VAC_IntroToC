#include  <stdio.h>

void main ( void )
{
  int value;
  int *pv;
  int **ppv;

  value = 32;
  pv = (int *)&ppv;
  ppv = &pv;

  printf("value = %d\n", value );
  printf("*pv   = %d\n", *pv );
  printf("**ppv = %d\n", **ppv );

}
