#include <stdio.h>
int main()
{
	int n, a, b, c, d, e, f, g=0, h=1;
	while(1)
	{
	printf("15111826 이진호\n");
	printf(" ----------------------------------------\n");
	printf(" 1:	8-15 로 이동                           \n");
	printf(" 2:	8-16 로 이동                            \n");
	printf(" 3:	8-20 로 이동                          \n");
	printf(" 4:	종료                            \n");
	printf(" ----------------------------------------\n");
	printf("실습 번호 입력후 Enter>>");
	scanf("%d", &n);
	switch(n) 
	{
	case 1:
		printf("예제8-15\n");
		printf("1부터 b까지의 합 계산\n");
		printf("정수 b 입력 :");
		scanf("%d", &b);
		for(a=1;a<=b;a+=1)
			g+=a;
		printf("1부터 %d까지의 합: %d\n", b, g);
		break;
	case 2:
		printf("예제8-16\n");
		printf("1부터 d까지의 곱 계산\n");
		printf("정수 d 입력 :");
		scanf("%d", &d);
		for(c=1;c<=d;c+=1)
			h*=c;
		printf("1부터 %d까지의 곱:%d\n", d, h);
		break;

	case 3:
		printf("예제8-20\n");
		for(e=1;e<=3;e+=1)
		{
			for(f=1;f<=3;f+=1)
			printf("A");
			printf("\n");
		}
		break;
	case 4:
		return 1;
	}
	}
}
