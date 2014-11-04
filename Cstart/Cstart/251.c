#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strAlloCopy(char *Copy);

int main(){
	char *s=0;
	char t[100];
	scanf("%s",t);
	s =strAlloCopy(t);
	printf("%s\n",s);
	free(s);
	return 0;
}

char *strAlloCopy(char *Copy){
	char *name_b;
	name_b=(char*)malloc(sizeof(char)*(strlen(Copy)+1));
	strcpy(name_b,Copy);#
	return name_b;
}