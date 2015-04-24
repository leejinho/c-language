#include <stdio.h>
void main()
{
	float alcol;
	printf("혈중 알코올 농도를 입력한뒤 Enter>");
	scanf("%f", &alcol);
	if(alcol<=0.049&&alcol>0)
	{
	printf("훈방조치 입니다.\n");
	}
	else if(alcol<=0.099&&alcol>=0.05)
	{
	printf("면허 정지, 벌금 100만원 입니다.\n");
	}
	else if(alcol<=0.19&&alcol>=0.1)
	{
	printf("면허 취소, 벌금 300만원 입니다.\n");
	}
	else if(0.2<=alcol)
	{
	printf("면허 취소, 구속입니다.\n");
	}
}
