#include<stdio.h>
int input_side()
{
  int x;
  printf("enter the side of triangle\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if(a==b && b==c && c==a)
  printf("the given triangle is equilateral");
  else if(a==b || b==c || c==a)
  printf("the given triangle is isosceles");
  else
  printf("the given triangle is scalene");
}
void output(int a,int b,int c,int isscalene)
{
  printf("%d %d %d is %d",a,b,c,isscalene);
  return;
}
int main()
{
  int a= input_side();
  int b= input_side();
  int c= input_side();
  check_scalene(a,b,c);
  void output();
  return 0;
}