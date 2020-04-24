
#include <math.h> 
#include <stdio.h> 
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) { 
		key = arr[i]; 
		j = i - 1; 
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 
int main()
{
   int b[100];
   int n;
   printf("Welcome to bubble sort; give array size \n");
   scanf("%d", &n); 
   printf("\n  Enter %d integers \n", n);
   
   for(int i=0; i<n; ++i)
      scanf("%d", &b[i]); 

    insertionSort(b, n);

   printf("The Array:\n");
    for(int i=0; i<n; ++i)
      printf("%d ", b[i]);
	  return(0);
} 


