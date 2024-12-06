#include<stdio.h>
int main(){
	int a[50],i,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++){
		 scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		 printf("%d\t",a[i]);
	}
}
