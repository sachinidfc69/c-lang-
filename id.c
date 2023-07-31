#include<stdio.h>
int main(){
	FILE *sourceFile , *targetFile;
	sourceFile = fopen("hi.c","r");
	targetFile = fopen("copy.txt","w");
	char ch;
	while(1){
		ch = fgetc(sourceFile);
		if(ch == EOF)
		break;
		fprintf(targetFile,"%c",ch);
		
	}
	fclose(sourceFile);
	fclose(targetFile);
	return 0;
	
}
