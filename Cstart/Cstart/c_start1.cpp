#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *name_a;
	char *name_b;
	char buffer[20];

	scanf("%s",buffer);
	name_a=(char*)malloc(sizeof(char)*(strlen(buffer)+1));
	
	strcpy(name_a,buffer);
	
	scanf("%s",buffer);
	name_b=(char*)malloc(sizeof(char)*(strlen(buffer)+1));
	strcpy(name_b,buffer);
	printf("%s\t%s\n",name_a,name_b);
	return 0; 

}