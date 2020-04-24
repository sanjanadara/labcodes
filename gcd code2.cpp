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
//recursive code
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
   if(x==0&&y==0)
   {
     gcd=0;
   }
   if(x<0)
   {
     x=-x;
   }
   if(y<0)
   {
     y=-y;
   }
  if(x>=y)
  {
   if(x%y==0)
   gcd=y;
   else
   {
     y=x;
     x=x%y;
     GCD(x,y);
   }
  }
  else
   { 
     if(y%x==0)
     gcd=x;
     else
     {
     x=y;
     y=y%x;
     GCD(x,y);
     }
   }
  printf("gcd=%d",gcd);
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
   if(x==0&&y==0)
   {
     gcd=0;
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
    {
     if(x%y==0)
     {gcd=y;break;}
     else  
     x=x%y;
    }
    else
    {
     if(y%x==0)
     {gcd=x;break;}
     else
     {
     y=y%x;
     }
    }
  }
 if(x==y)
  {
    gcd=x;
  }
 printf("gcd=%d",gcd);
}
