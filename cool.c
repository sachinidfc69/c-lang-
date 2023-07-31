#include<stdio.h>  
void main( )  
{  
FILE *fp ;  
 int i, numFormFile;
fp = fopen("file1.txt","w+") ;  
if(fp == NULL)
printf("sorry...\n");
else{
	for(i=1;i<=20;i++){
		fprintf(fp,"%d\t",i);
	}
}
rewind(fp);
for(i=1;i<=20;i++){
		numFormFile = fgetc(fp);
		
		printf("%d\t",2*numFormFile);

fclose (fp ) ;  

}}  
