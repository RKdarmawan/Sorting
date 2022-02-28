#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


//Insertion NIM
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 

        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[] = { 23,67,89,5,45,20,15,27};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printf("Array Ascending : \n");
    printArray(arr, n);
 
    return 0;
}
