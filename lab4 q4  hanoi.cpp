#include<stdio.h>
#include<stdlib.h>
void hanoi(int n,char from,char to,char by);
int main()
{
	int n;
	printf("Enter the number of discs:\t");
	scanf("%d",&n);
	hanoi(n,'A','C','B');
	return(0);
}
void hanoi(int n,char from,char to,char by)
{
	if(n==1)
	{
		printf("move disc 1 from %c to %c\n",from,to);
		return;
	}
	hanoi(n-1,from,by,to);
	printf("move disc %d from %c to %c\n",n,from,to);
	hanoi(n-1,by,to,from);
}
