#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int a[3][2]={{1,4},{1,2},{8,2}};
	int b[3][2]={{5,3},{2,6},{1,4}};
	printf("The first 3x2 matrix is\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("The second 3x2 matrix is\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	printf("The sum of the matrices is\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			sum=a[i][j]+b[i][j];
			printf("%d  ",sum);
		}
		printf("\n");
	}
		printf("The substraction of two matrices is\n");

	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			sum=a[i][j]-b[i][j];
			printf("%d  ",sum);
		}
		printf("\n");
	}
	return 0;
}
