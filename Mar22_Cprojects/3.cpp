#include <stdio.h>
int add(int n);
int main(void)
{
	int n;
	printf("정수 입력후 Enter>");
	scanf("%d", &n);
	printf("1부터 %d까지 합 : %d\n", n, add(n));
	return 0;
}

int add(int n)
{
	if (n==1)
		return 1;
	return n+add(n-1);
}




#include <stdio.h>
int fact(int n);
void main()
{
	int n;
	printf("정수 입력후 Enter>");
	scanf("%d", &n);
	printf("1부터 %d까지 곱 : %d\n", n, fact(n));
}

int fact(int n)
{
	if (n==1)
		return 1;
	return n*fact(n-1);
}




#include <stdio.h>
int call_1(int n);
int main(void)
{
	printf("%d\n", call_1(123));
	return 0;
}
int call_1(int n)
{
	if (n==0)
		return 0;
	return call_1(n/10)+1;
}
