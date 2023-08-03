#include<stdio.h>


int print(int count){
	
	if(count == 0)
	return;
	
	return count +  print(count - 1);	
	
}
int main(){
	
	int count,sum =0;
	printf("enter n value : ");
	scanf("%d",&count);
	
	printf("sum is %d",print(count));
	return 0;
	
}

