#include<stdio.h>
int main(){
	int a[5]={42,65,23,82,2};
	int i,j;
	int largest;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				largest=a[j];
			}
		}
	}
	printf("The largest Number is %d",largest);
	return 0;
}
