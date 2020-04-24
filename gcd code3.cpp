#include<stdio.h>
void GCD(int x,int y);

int main()
{
  int a,b;
  printf("enter  number1");
  scanf("%d",&a);
  printf("enter number2");
  scanf("%d",&b);
  GCD(a,b);
  
}
// recursive code
/*void GCD(int x,int y)
{
  int gcd;
  if(x==0)
   {
     gcd=y;
   }
   if(y==0)
   {
     gcd=x;
   }
   
   if(x<0)
   {
     x=-x;
   }
   if(y<0)
   {
     y=-y;
   }
  if(x==y)
  {
   gcd=x;
   printf("gcd=%d",gcd);
  }
  else if(x>y)
  {
    GCD(x-y,y);
  }
  else
  {
    GCD(x,y-x);
  }
}*/
//iterative code
void GCD(int x,int y)
{  
  int gcd;
   if(x==0)
   {
     gcd=y;
   }
   if(y==0)
   {
     gcd=x;
   }
   
   if(x<0)
   {
     x=-x;
   }
   if(y<0)
   {
     y=-y;
   }
  
   while(x!=y)
   {
     if(x>y)
     x=x-y;
     else
     y=y-x;
   }
  if(x==y)
  {
   gcd=x;
   printf("gcd=%d",gcd);
  }
}
