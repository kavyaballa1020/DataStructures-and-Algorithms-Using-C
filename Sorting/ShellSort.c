#include <stdio.h>
int main()
{
    int arr[] = {10, 15, 1, 2, 9, 16, 11};
    int n = 7;
    int gap, i, j, temp;
    for (gap = n / 2; gap >= 1; gap = gap / 2)
    {
        for (j = gap; j < n; j++)
        {
            temp=arr[j];
            i=j;
            while(i>=gap && temp<arr[i-gap]){
                arr[i]=arr[i-gap];
                i=i-gap;
            }
            arr[i]=temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}