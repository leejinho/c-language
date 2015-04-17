#include <stdio.h>
void main()
{
	float a, b, c, x, y;
	a=2.5, b=3.2, c=4.5, x=10.5;
	y=(a-b)*x*x+(b-c)*x-20*a*c;
	printf("a=%.1f, b=%.1f, c=%.1f이고x가 %.1f라는 값을 가질 때 y=(a-b)x^2+(b-c)x-20ac인 y의 결과는 %.2f입니다.", a, b, c, x, y);
}
