#include<stdio.h>

int table(int i,int num){
	return i*num;
}

int main(){
	int i,num=7;
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",num,i,table(i,num));
	}
	return 0;
}
