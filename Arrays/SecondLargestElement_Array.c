#include<stdio.h>
int main(){
	int largest,sec_largest,i,j;
	int a[5]={1,2,3,45,5};
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				largest=a[j];
			}
		}
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				if(a[j]!=largest){
					sec_largest=a[j];
				}
			}
		}
	}
	printf("Largest Number is %d\n",largest);
			printf("Second largest %d\n",sec_largest);

	return 0;
}
