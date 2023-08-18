#include<stdio.h>
int main(){
	
	FILE *pfile = fopen("fgetc_and_fgets_2.c","r");
	
	char ch;
//----------------------------------WAY --1	FGETC
	do{
		if((ch = fgetc(pfile)) == EOF) break;
		else printf("%c", ch);
	}while(1);
	
	//-------------------------------WAY 2  FGETC
//	 if(pfile == NULL) {
//      perror("Error in opening file");
//      return(-1);
//   } do {
//      ch = fgetc(pfile);
//      if( ch == EOF ) {
//         break ;
//      }
//      printf("%c", ch);
//   } while(1);
	
//-------------------------------- fgets();
//	char str[500];
//	while(fgets(str,500,pfile) != NULL){
//		printf("%s",str);
//	}
	
	fclose(pfile);
	return 0;
}
