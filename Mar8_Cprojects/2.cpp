#include <stdio.h>
void main()
{
	int P, a, b, c, d, e, f, sum;
	printf("어떤실습을 하시겠습니까?");
	switch(P)
	{
	case 1:
		printf("1부터 b까지의 합 계산\n");
		printf("정수 b 입력 :");
		scanf("%d", &b);
		for(a=1;a<=b;a+=1)
			sum+=a;
		printf("1부터 %d까지의 합: %d\n", b, sum);
		break;

	case 2:
		printf("1부터 d까지의 곱 계산\n");
		printf("정수 d 입력 :");
		scanf("%d", &d);
		for(c=1;c<=d;c+=1)
			sum*=c;
		printf("1부터 %d까지의 곱:%d\n", d, sum);
		break;

	case 3:
		for(e=1;e<=3;e+=1)
		{
			for(f=1;f<=3;f+=1)
				printf("A");
			printf("\n");
		}
		break;
	}
}
