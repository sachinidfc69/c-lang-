#include<stdio.h>

void swap(int*pa, int *pb){
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
	
	printf("now the value of a = %d and b = %d\n",a,b);
}

void main(){
	
	int a = 6 , b = 9;
	printf("before the value of a = %d and b = %d\n",a,b);
	swap(&a,&b);
	
	
}
