#include<stdio.h>
float input()
{
  float a;
  printf("Enter the number");
  scanf("%f",&a);
  return a;
}
float sqr_root(float n)
{
  float temp,sqrt;
  sqrt=n/2;
  temp=0;
   while(sqrt !=temp)
   {
     temp=sqrt;
     sqrt=(n/temp+temp)/2;
   }
   return sqrt;
}
void output(float n,float sqrt)
{
  printf("Square root is %f",sqrt);
}
 int main()
 {
    float n,temp,sqrt;
    n=input();
    temp=sqr_root(n);
    sqrt=sqr_root(n);
    output(n,sqrt);
    return 0;
 }