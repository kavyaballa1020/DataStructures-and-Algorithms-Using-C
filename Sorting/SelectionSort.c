#include<stdio.h>
int main(){
    int arr[]={7,4,10,8,3,1};
    int n=6;
    int min,i,j;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}