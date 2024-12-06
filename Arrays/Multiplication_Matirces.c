#include<stdio.h>
int main()
{
	int i,j,k;
	int mult[2][2];
	int a[2][3]={{1,4,4},{1,2,5}};
	int b[3][2]={{5,3},{2,6},{3,5}};
	printf("The first 2x3 matrix is\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
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
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mult[i][j]=0;
			for(k=0;k<3;k++){
				mult[i][j]=mult[i][j]+a[i][k]*b[k][j];
			}
		}
		printf("\n");
	}
	printf("The Multiplication of 2x2 matrix is\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d  ",mult[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
