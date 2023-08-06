#include<stdio.h>
int main(){
	
	FILE *pfile = fopen("emp.txt","w");
	char name[100];
	int age,i;
	char input;
	do{
		printf("enter your name : ");
		scanf("%s",name);
		printf("entry your age : ");
		scanf("%d",&age);
		fprintf(pfile,"name = %s and age = %d\n",name,age);
		printf("do you still wanna input data the enter 'y' else 'n' ");
		scanf("%c",&input);
	}while(input == 'y');
	
//	for(i=1;i<=input;i++){
//		printf("enter your name : ");
//		scanf("%s",name);
//		printf("entry your age : ");
//		scanf("%d",&age);
//		fprintf(pfile,"name = %s and age = %d\n",name,age);
//		printf("do you still wanna input data the enter 'y' else 'n' ");
//		scanf("%c",&input);
//	}
	
	fclose(pfile);
	return 0;
}
