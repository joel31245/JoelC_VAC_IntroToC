#include  <stdio.h>

void main ( void )
{
  int value;
  int *pv;
  int **ppv;
  int **ppw;

  value = 32;
  pv = &value ;
  ppv = &pv ;
  ppw = &pv ;

  // *pv = number will alter value
  // **ppv = number will do so too.

  printf("value = %d\n", value );
  printf("**ppv = %d\n", **ppv );
  printf("**ppw = %d\n", **ppw );

}
