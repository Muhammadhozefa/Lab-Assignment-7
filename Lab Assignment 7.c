#include <stdio.h>

void bubbleSort(int arr[], int n, int swaps[])
{
printf("\nUsing Bubble sort\n\n");
int i, j,temp;

  for (int i = 0; i < n-1; i++) {
  for (j = 0; j < n-i-1; j++)
{
  if (arr[j] > arr[j+1])
{
  temp=arr[j];
  arr[j]=arr[j+1];
  arr[j+1]=temp;
  swaps[j]++;
}
}
} 
}

// Driver program to test above functions
int main()
{

int arr[] = {97,16,45,63,13,22,7,58,72};
int n = 9; //size of the array
  int swaps[n];
  for (int i = 0; i < n; i++) {
        swaps[i] = 0;
    }

bubbleSort(arr, n, swaps);
    for (int i = 0; i < n; i++) {
        printf("Index %d: %d swaps\n", i, swaps[i]);
    }
    return 0;
}
