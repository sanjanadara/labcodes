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
   for(int i=1;i<=x&&i<=y;i++)
   {
       if(x%i==0&&y%i==0)
       {
         gcd=i;
       }
   }
   printf("gcd=%d",gcd);
}*/

//iterative code
 int i=0;
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
  
  if(i<=x&&i<=y)
  {
    i++;
    if(x%i==0&&y%i==0)
     {gcd=i;
    
    GCD(x,y);}
    else
    GCD(x,y);
  }
  
   printf("gcd=%d",gcd);
}
  
    

