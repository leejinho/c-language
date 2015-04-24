#include <stdio.h>
void main()
{
 int y;
 printf("연도를 입력하세요\n");
 scanf("%d",&y);
if(y%4==0)
 {
  printf("%d는 윤년입니다.\n",y);
 }
else if((y%100!=0)&&(y%400==0))
{
	printf("%d는 윤년입니다.\n",y);
}
 else
 {
  printf("%d는 평년입니다.\n",y);
 }
}
