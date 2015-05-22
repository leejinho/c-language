#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	{
		int i;
		printf("숫자 입력 후 Enter>");
		scanf("%d", &i);
		printf("%d의 절대값=%d\n", i, abs(i));
		printf("\n");
	}
	{
		printf("pow(10,3)=%.3f\n", pow(10.,3.));
		printf("pow(2,4)=%.3f\n", pow(2.,4.));
		printf("\n");
	}
	{
		printf("%f\n", sqrt((double) 2));
		printf("%f\n", sqrt((double) 9));
		printf("\n");
	}
	{
		srand(time(NULL));
		for(int i=1;i<=10;i+=1)
			printf("%d\n", rand()%100+1);
		printf("\n");
	}
}
