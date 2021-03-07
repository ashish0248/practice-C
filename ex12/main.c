#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
 
  int i, amari;
 
  /* 自然数 */
  int num;
 
  /* 和 */
  int sum = 0;
 
  /* 自然数を入力 */
  printf("自然数を入力してください = ");
  scanf("%d", &num);
 
  for( i=1; i<num; ++i) {
    if( (num % i) == 0)
      sum += i;
  }
 
  if( num == sum )
    printf("%d は完全数です！\n", num);
  else
    printf("%d は完全数ではありません！\n", num);
 
  return 0;
}
