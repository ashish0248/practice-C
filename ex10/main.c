#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
 
  int i, j, amari;
 
  /* 和 */
  int sum;
 
  for( i=1; i<=100000; ++i ) {
    sum = 0;
 
    for( j=1; j<i; ++j) {
      if( (i % j) == 0)
        sum += j;
    }
 
    /* 完全数かどうか判定 */
    if( j == sum )
      printf("%d ", j);
 
  }
 
  printf("\n");
  return 0;
}
