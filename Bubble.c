#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//Bubble Sort
void swap(int *w, int *q)
{
    int temp = *w;
    *w = *q;
    *q = temp;
}
  

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
  
       
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Array Ascending : \n");
    printArray(arr, n);
    return 0;
}



