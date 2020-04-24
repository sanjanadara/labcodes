#include<stdio.h>
int binarysearch(int a[],int c,int n);
void bubblesort(int a[],int size);
void logic1(int a[],int n,int p);
void logic2(int a[],int n,int p);
void logic3(int a[],int n,int p);



int main()
{
   int a[100],p,n;int flag=0;
   printf("enter the size of array\n");
   scanf("%d",&n);
   printf("enter the integers\n");
   for(int i=0;i<n;i++) 
   {
     scanf("%d",&a[i]);
   }
    for(int i=0;i<n;i++) 
   {
     printf("%d",a[i]);
   }
   printf("\nenter the integer p\n");
   scanf("%d",&p);
   logic1(a,n,p);
   logic2(a,n,p);
   logic3(a,n,p);
}

   void logic1(int a[],int n,int p)
   {
   	 int flag=0;
   	 for(int i=0;i<n;i++) 
     {
      for(int j=i+1;j<n;j++)
       {
         if(a[i]+a[j]==p)
         {
           flag=1;
           break;
         }
         }  
     }
   if(flag==1)
   { printf("\n There exists a pair");}
   else
   {  printf("\n no pair");}
  }
     
  
   

   //logic 2
   
   void bubblesort(int a[],int size)
    {
    int temp; int n;n=size;
    for(int i=0;i<size-1;i++)
    {
      for(int j=0;j<size-i-1;j++)
         {
           if(a[j]>a[j+1])
             {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
             }
          }
    }
}
int binarysearch(int a[],int c,int n)
{
  int beg=0,mid,end=n-1;
  int flag=0;
   while(beg<=end)
   {
    mid=(beg+end)/2;
    if(c==a[mid])
     { flag=1;break;}
    else if(c<a[mid])
     { end=mid-1;}
    else
      {beg=mid+1;}
     }
 if(beg>end)
 return 0;
 if(flag==1)
 { return 1;}
 }
  
void logic2(int a[],int n,int p)
{
 bubblesort(a,n);
 int s;
 for(int i=0;i<n;i++)
 { 
   
   s=binarysearch(a,p-a[i],n);
   if(s==1)
   {
   	break;
   }
 }
 if(s==1)
  {
   printf("\n there is a pair");
 }
else
{
printf("\n no pair");
}
}

void logic3(int a[],int n,int p)
{
  bubblesort(a,n);
  
  int l=a[0];
  int r=a[n-1];
  int flag=0;
  while(l<r)
  {
    if(a[l]+a[r]==p)
    {
       flag=1;break;
    }
    else if(a[l]+a[r]<p)
    {
      l++;
    }
    else
    {
      r--;
    }
 
  }  
 if(flag==1)
 {printf("\n there exists a pair");}
 else
 { printf("\n no pair");}
}

