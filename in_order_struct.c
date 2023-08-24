#include<stdio.h>
#include<string.h>
struct info{
	char name[20];
	int age;
}st[3];

int main(){
	
	int i;
	for(i=0;i<3;i++){
		printf("enter your name and age: ");
		scanf("%s%d",st[i].name,&st[i].age);
//		strlwr(st[i].name);
		
	}
	for(i=0;i<3;i++){
		if(st[i].name[0] >= 'a' && st[i].name[0] <='z'){
			st[i].name[0] -= 32;
	}
	}
	char ch;
	for (ch = 'A';ch<= 'Z';ch++)
	{
		for(i=0;i<3;i++){
			if(st[i].name[0] == ch){
				printf("name = %s\n",st[i].name);
				printf("age = %d\n",st[i].age);
			}
	}
	}	
	
//	char A = 'A' ,Z = 'Z' ,a = 'a' , z = 'z';
//	printf("A = %d and a = %d",A,Z);
//	printf("Z = %d and z = %d",a,z);
	
	return 0;
}
