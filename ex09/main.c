#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
 
  /* 自然数 */
  int number;
 
  /* 判定  */
  int flag = 0;
 
  /* 自然数の入力 */
  printf("自然数 = ");
  scanf("%d", &number);
 
  /* 素数かどうかを判定 */
  for( i=2;i<number;++i ) {
    if( number%i==0 ) {
      flag = 1;
      break;
    }
  }
 
  /* 判定結果を出力 */
  if( flag==0 )
    printf("%d は素数です。\n",number);
  else
    printf("%d は素数ではありません。\n",number);


}

