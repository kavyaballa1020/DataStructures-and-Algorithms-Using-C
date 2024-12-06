#include<stdio.h>
int main(){
	int a[3][3],i,j;
	printf("Enter the elements in 3X3 array\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The 3X3 matric is : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
