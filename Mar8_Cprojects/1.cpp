#include <stdio.h>
int main()
{
	int n, a, b, c, d=1, e, f, g;
	printf("실습 번호 입력후 Enter>>");
	scanf("%d", &n);
	switch(n)
	{
	case 1: 
		printf("예제8-4\n");
		for (a=1;a<=10;a+=2)
		printf("%d, 이름:이진호\n", a);
		break;
	case 2:
		printf("예제8-7(1)\n");
		for(b=1;b<=10;b+=1)
		printf("%d", b);
		printf("\n");
		break;
	case 3: 
		printf("예제8-7(2)\n");
		for(c=10;c>=1;c-=1)
		printf("%d", c);
		printf("\n");
		break;
	case 4: 
		printf("예제8-11(1)\n");
		while(d<=10)
	{
		printf("%d", d);
		printf("\n");
		d+=2;
	}
		break;
	case 5:
		printf("예제8-11(2)\n");
		for(e=1;e<=10;e+=2)
		printf("%d", e);
		printf("\n");
		break;
	case 6: 
		printf("예제8-12(1)\n");
		do
	{
		printf("0을 입력하면 종료함\n");
		printf("숫자 입력후 Enter>>\n");
		scanf("%d", &f);
	} while(f!=0);
	break;
	case 7: 
		printf("예제8-12(2)\n");
		while(g!=0)
	{	
		printf("0을 입력하면 종료함\n");
		printf("숫자 입력후 Enter>>\n");
		scanf("%d", &g);
	}
	break;
 }
}
