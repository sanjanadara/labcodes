#include <stdio.h>
#include<stdlib.h>
int a[100];
int b[100];
void merging(int low, int mid, int high) 
{
   int l, r, i;
   for(l = low, r = mid + 1, i = low; l <= mid && r <= high; i++) 
   {
      if(a[l] <= a[r])
         b[i] = a[l++];
      else
         b[i] = a[r++];
   }
   while(l <= mid)    
      b[i++] = a[l++];
   while(r <= high)   
      b[i++] = a[r++];
   for(i = low; i <= high; i++)
      a[i] = b[i];
}
void sort(int low, int high)
{
   int mid;
   if(low < high) 
   {
      mid = (low + high) / 2;
      printf("1");
      sort(low, mid);
      printf("L\t");
      printf("2");
      sort(mid+1, high);
      printf("R\t");
      merging(low, mid, high);
      printf("3");
      printf("M\n");
   } 
   else 
      return;  
}
int main() 
{ 
   int i,n;
   printf("Enter array size:\t");
   scanf("%d",&n);
   printf("Enter the array values:\n");
   for(i=0;i<n;i++)
      scanf("%d", &a[i]);
   sort(0,n-1);
   printf("\nList after sorting\n");
   for(i=0;i<n;i++)
      printf("%d  ",a[i]);
}
