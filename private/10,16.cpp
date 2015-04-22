
/*
16진수 ↔ 10진수
Made by SMILEODIN
*/
 
#include<stdio.h>
 
void Intro(void)            //인트로 
{
    printf("16진수 ↔ 10진수\n");
    printf("MADE BY SMILEODIN");
    printf("\n\n");
    printf("정수를 입력해주세요 : ");
}
 
 
 
int main()
{
    Intro();
    int input;
    int no;
    scanf("%d", &no);
 
 
    printf("\n옵션 1: 10진수\n옵션 2: 16진수\n\n");
    scanf("%d", &input);
 
 
    switch(input)
    {
    case 1 :
        printf("\n10진수를 선택하셨습니다.\n");
        printf("결과 : %d\n\n", no);
        break;
    case 2:
        printf("\n16진수를 선택하셨습니다.\n");
        printf("결과 : %x\n\n", no);
        break;
    default :
        printf("\n잘못된 선택을 하셨습니다.\n");
    }
 
 
    return 0;
}
