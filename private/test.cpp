#include <stdio.h>
void main()
{
 int time, fare;
 printf("주차시간(분)을 입력하고 Enter>");
 scanf("%d", &time);
if(time%10==0)
{
	fare=(time/10)*1000;
}
else
{
	fare=(time/10+1)*1000;
}
printf("주차요금= %d원",fare);
}
