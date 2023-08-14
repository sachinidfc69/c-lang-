#include<stdio.h>
int main(){
	
	FILE *pfile = fopen("data.txt","w");
	
	int n, age , id;
	char name[100];
	
	printf("enter the n value");
	scanf("%d",&n);
	int i;
	if(pfile == NULL){
		printf("file can't be opened");
	}else{
	// write data to the fill ....
	for(i=0;i<n;i++){
		printf("enter the name : ");
		scanf("%s",name);
		printf("enter your id : ");
		scanf("%d",&id);
		printf("enter your age : ");
		scanf("%d",&age);
		fprintf(pfile,"%s\t %d\t %d\n",name ,id,age);
		
		
	}
	fclose(pfile);
	}
	
	pfile = fopen("data.txt","r");
	
	// read data from the file ....
	while(fscanf(pfile,"%s\t %d\t %d",name,&id,&age) != EOF){
		printf("name = %s \t, id = %d\t and age = %d\n",name,id,age);
	}
	// #cool...
	fclose(pfile);
	return 0;
}
