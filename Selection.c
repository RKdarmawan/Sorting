#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// 23,67,89,5,45,20,15,27
// selection insertion sort

 //Selection NIM
void swap(int *w, int *q)
{
    int temp = *w;
    *w = *q;
    *q = temp;
}
  
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
  
    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
  
        swap(&arr[min_idx], &arr[i]);
    }
}
  
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
  

int main()
{
    int arr[] = {23,67,89,5,45,20,15,27};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Array Ascending : \n");
    printArray(arr, n);
    return 0;
}











 

