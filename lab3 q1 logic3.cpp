#include<stdio.h>
void logic3(int a[],int n);
int main()
{
	int a[100],n;
	printf("enter the terenary numbers");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(int i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
 logic3(a,n);
 for(int i=0;i<n;i++)
 {
 	printf("%d",a[i]);
 }
}
void logic3(int a[],int n)
{
	int b[n];int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
	   {
		b[j]=a[i];
		j++;
       }
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==2)
		{
			b[j]=a[i];
			j++;
		}
	}
for(int i=0;i<n;i++)
{
	a[i]=b[i];
}
}
	
