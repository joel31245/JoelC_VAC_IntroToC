#include  <stdio.h>


int main ( void )
{
  int value, num = 99 ;
  int *pv= &value, *pn = &num ;
  int **ppv= &pv ;

  **ppv = *pn;  /* ugly statement */ // statement sets value = num;

  printf("**ppv   = %d\n", **ppv );
  printf("%d", value);

  return 0;
}
