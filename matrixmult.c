#include<stdio.h>
#define MAX 50
int main(){
	
	int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX],
	i,j,k, arows,acolumns,brows,bcolumns,sum=0;
	
	printf("enter the row and columns  of a matrix a\n: ");
	scanf("%d %d",&arows,&acolumns);
	
	printf("enter the element of matrix a :\n ");
	for(i= 0;i<arows;i++){
		
		for(j=0;j<acolumns;j++){
			
			scanf("%d",&a[i][j]);
			
		}
		
	}
	
	printf("enter the rows and columns of matrix b : \n");
	scanf("%d %d",&brows,&bcolumns);
	
	if(acolumns != brows){
		printf("sorry !D \n");
		
	} else{
		printf("enter the elements of matrix B :\n");
		for(i=0;i<brows;i++){
			
			for(j=0;j<bcolumns;j++){
				
				scanf("%d",&b[i][j]);
			}
		}
	}
	printf("\n");
	
	for(i=0;i<arows;i++){
		
		for(j=0;j<bcolumns;j++){
			
			for(k=0;k<brows;k++){
				sum+=a[i][k] * b[k][j];
			
			}
			product[i][j] = sum;
			sum = 0;
		}
	}
	
	printf("--------------------------------------------\n");
	printf("\n resulting matrix :"
	);
	
	for(i=0;i<arows;i++){
		
		for(j=0;j<bcolumns;j++){
			
			printf("%d ",product[i][j]);
			
		}
	}	
	
	return 0;	
}
