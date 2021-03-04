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
