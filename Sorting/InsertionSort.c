#include<stdio.h>
int main(){
    int arr[]={5,4,10,1,6};
    int n=5;
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0 ;
}