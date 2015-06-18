#include <stdio.h>
#define DRINK_NUMBER 10
int put = 0;
int money = 0;
int drinkMoney[5] = { 700, 700, 600, 500, 800 };
int a, b, c, d, e, r, t, y;
int main()
{
   char drink[5][10] = { "사이다", "콜라","환타","커피","코코팜" };
   int drinkStock[5] = { DRINK_NUMBER, DRINK_NUMBER, DRINK_NUMBER, DRINK_NUMBER, DRINK_NUMBER };
   int select = 0;
   while (1)
   {
    printf("1.%s(700원)\n2.%s(700원)\n3.%s(600원)\n4.%s(500원)\n5.%s(800원)\na.자판기 초기화\nb.돈 투입\nc.매출 체크\nd.돈 반환\ne.종료\n",drink[0], drink[1], drink[2], drink[3], drink[4]);
       scanf("%d", &select);
         if (drinkStock[select - 1] != 0)
         {
    if (drinkMoney[select - 1] < money)
    {
     printf("%s  남은수량 : %d\n", drink[select - 1], drinkStock[select - 1] - 1);
     --(drinkStock[select - 1]);
     money = money - drinkMoney[select - 1];
    }
    else if (drinkMoney[select - 1] > money)
    {
     printf("보유 금액이 부족합니다.\n");
    }
        else (drink[select - 1]);
    {
            printf("%s 의 재고가 없습니다.\n", drink[select - 1]);
    }
         }
      }
    if (select == a)
      {
    printf("초기화 되었습니다.\n");
         drinkStock[0] = DRINK_NUMBER;
         drinkStock[1] = DRINK_NUMBER;
   drinkStock[2] = DRINK_NUMBER;
   drinkStock[3] = DRINK_NUMBER;
   drinkStock[4] = DRINK_NUMBER;
      }
   else if (select == b)
   {
    printf("돈을 넣으시오.r(100원)t(500원)y(1000원)\n");
     printf("현재 자판기에 있는 금액:%d\n", money);
   }
   else if (select == c)
   {
    printf("매출액:%d\n", drinkMoney[0] * (10 - drinkStock[0]) + drinkMoney[1] * (10 - drinkStock[1]) + drinkMoney[2] * (10 - drinkStock[2]) + drinkMoney[3] * (10 - drinkStock[3]) + drinkMoney[4] * (10 - drinkStock[4]));
   }
   else if (select == d)
   {
    printf("현재 자판기에 있는 금액:%d\n", money);
    printf("환전할 금액:%d\n", money);
    money = 0;
   }
   else if (select == e )
   {
    printf("종료합니다.");
   }
      else if (select == r )
    {
     printf("100원을 넣었습니다.\n");
     money=money+100;
   }
         else if (select == t )
    {
     printf("500원을 넣었습니다.\n");
     money=money+500;
   }
      else if (select == y )
    {
     printf("1000원을 넣었습니다.\n");
     money=money+1000;
   }
   }
