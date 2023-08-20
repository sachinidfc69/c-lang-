#include<stdio.h>
typedef struct size_of{
	char name[10];
	int age;
	float marks;
}st;
int main(){
	st sachin = {"sachin",18,69};
	printf("%d\n",sizeof(sachin.name));
	printf("%d\n",sizeof(sachin.age));
	printf("%d\n",sizeof(sachin.marks));
	
	printf("total size = %d\n",sizeof(sachin));
		
//	printf("total = %d\n",sizeof(sachin.marks) + sizeof(sachin.name) + sizeof(sachin.age));	

	return 0;
}
