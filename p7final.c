#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef _triangle Triangle
Triangle input_triangle()
{
  Triangle b;
  printf("enter input for triangle");
  scanf("%f%f",&b.base,&b.altitude);
  return b;
}
void find_area(Triangle *t)
{
  t->area = 0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
  printf("area of triangle with base %f and altitude %f is %f", t.base,t.altitude,t.area);
}
int main(void)
{
  Triangle t;
  t = input_triangle();
  find_area(&t);
  output(Triangle t);
    return 0;
}