#include<stdio.h>
int r1,r2,c1,c2,a[10][10],b[10][10],c[10][10];
void create();
void multiply();
void Display();
int main(){
	create();
	multiply();
	Display();
}
void create(){
	int i,j;
	printf("Enter rows and columns of the first matrix ");
	scanf("%d %d",&r1,&c1);
	printf("Enter rows and columns of the second matrix ");
	scanf("%d %d",&r2,&c2);
	
	if(c1 != r2)
		printf("Matrix multiplication not possible");
		
	//Input of First matrix
	
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("Enter values of First matrix ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	//Input of Second matrix
	
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("Enter values of Second Matrix ");
			scanf("%d",&b[i][j]);
		}
	}
}

void multiply(){
	int i,j,k;
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			c[i][j] = 0;
			for(k=0;k<c1;k++){
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
			}
		}
	}
}

void Display(){
	int i,j;
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}