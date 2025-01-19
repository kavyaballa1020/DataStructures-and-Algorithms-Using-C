#include<stdio.h>
void radixSort(int arr[],int n);
void countsort(int arr[], int n, int pos);
int main(){
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n=8;
    int i;
    radixSort(arr,n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void radixSort(int arr[],int n){
    int max=arr[0];
    int i,pos;
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(pos=1;max/pos>0;pos=pos*10){
        countsort(arr,n,pos);
    }
}
void countsort(int arr[],int n,int pos){
    int max = arr[0];
    int min = arr[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    int k = max - min + 1;
    int count[k];
    int b[n];
    for (i = 0; i < k; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        ++(count[((arr[i] - min)/pos)%10]);
    }
    for (i = 1; i < k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (i = n - 1; i >= 0; i--)
    {
        b[--count[((arr[i] - min) / pos) % 10]] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = b[i];
    }
}