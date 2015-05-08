 #include <stdio.h>
int r (int n)
{
 while (n) 
 {
  printf("%d",n%10);
  n=n/10;
 }
 return 0;
}
 void main()
 {
  int n;
  printf("input :");
  scanf("%d",&n);
  printf("reverse :");
  r(n);
  printf("\n");
 }
