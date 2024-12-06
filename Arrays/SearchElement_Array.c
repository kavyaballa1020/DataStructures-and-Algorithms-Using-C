#include<stdio.h>
int main(){
	int a[5];
	int i;
	int data=45;
	int found=0;
	printf("Enter 5 numbers\n");
	for( i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("User has Entered these Numbers\n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]==data){
			found=1;
			break;
	}		
	}
	if(found==1){
		printf("Element found");
	}else{
		printf("Element not found");
	}
}
