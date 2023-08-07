#include<stdio.h>
int main(){
	
	FILE *pfile = fopen("emp.txt","w");
	char name[100];
	int age,i;
	char input;
	// --- > part 1;
	do{
		printf("enter your name : ");
		scanf("%s",name);
		printf("entry your age : ");
		scanf("%d",&age);
		
		fprintf(pfile,"name = %s and age = %d\n",name,age);
		
		printf("do you still wanna input data then enter 'y' else 'n': ");
		scanf("%s",&input);
		
//		printf("the value of input = %c\n ",input);

		}while(input == 'y');
		
		// ---> part 2;
		
//	int input1;
//	printf("enter the total number of data : ");
//	sscanf("%d",&input1);
	
//	for(i=1;i<=input1;i++){
//		printf("enter your name : ");
//		scanf("%s",name);
//		printf("entry your age : ");
//		scanf("%d",&age);
//		fprintf(pfile,"name = %s and age = %d\n",name,age);
//		
//	}
	
	fclose(pfile);
	return 0;
}
