#include <stdio.h>

void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

int main()
{
    int arr[] = {10, 15, 1, 2, 9, 16, 11};
    int n = 7; 

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotidx = partition(arr, low, high); 
        quickSort(arr, low, pivotidx - 1);        
        quickSort(arr, pivotidx + 1, high);      
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = low - 1;       

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        { 
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}
