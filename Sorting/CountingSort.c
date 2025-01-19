#include<stdio.h>
int main(){
    int arr[]={3,5,4,1,8,2,5,8,1,3,1,9,3,5};
    int n=14;
    int max=arr[0];
    int min=arr[0];
    int i;
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    int k=max-min+1;
    int count[k];
    int b[n];
    for(i=0;i<k;i++){
         count[i]=0;
    }
    for( i=0;i<n;i++){
        ++(count[arr[i]-min]);
    }
    for(i=1;i<k;i++){
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--){
        b[--count[arr[i]-min]]=arr[i];
    }
    for(i=0;i<n;i++){
        arr[i]=b[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}