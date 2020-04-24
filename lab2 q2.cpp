#include<stdio.h>
void logic1(int a[]);
void logic2(int a[]);
void logic3(int a[]);


int main()
{
  int a[10000],n,x,i;
  printf("enter the digits in non decreasing order");
  printf("\npress 9999 to stop entry\n");
  for(i=0;i<10;i++)
  {
    scanf("%d",&x);
    if(x!=9999)
    {
    a[i]=x;
    }
    if(x==9999)
    {
    	n=i;
       break;
	}
    
  }
  if(x==9999)
  {
    for(int j=n;j<10000;j++)
    {
      a[j]=-1;
    }
  }
  else
  printf("error");
 
  logic1(a);
  logic2(a);
  logic3(a);
 
}

void logic1(int a[])
{
	
  for(int i=0;i<10000;i++)
  {
     if(a[i]==-1)
     {  
        printf("\n -1 is in %d positon",i+1);
        break;
     }
   }
}
void logic2(int a[])
{

  for(int i=0;i<10000;i++)
  {
    if(a[i]+a[i+1]<a[i])
    {
      printf("\n -1 is in %d position",i+2);
      break;
    }
  }
}

void logic3(int a[])
{
	for(int i=0;i<10000;i++)
	{
		if((a[i]*a[i+1])==-a[i])
		{
			printf("\n -1 is in %d position",i+2);
            break;
		}
	}
}
