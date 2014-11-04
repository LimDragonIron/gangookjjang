#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct student{
	char *name;
	int english;
	int math;
};

int main(){
	char tempname[100];
	struct student myStudent[5];
	int tempeng, tempmath;
	int n;
	int numStudent =0;
	
	while( scanf ("%s %d %d",tempname,&tempeng,&tempmath) == 3){
		myStudent[numStudent].name=(char*)malloc(sizeof(char)*(strlen(tempname)+1));
		strcpy(myStudent[numStudent].name,tempname);
		myStudent[numStudent].english=tempeng;
		myStudent[numStudent].math= tempmath;
		numStudent++;
	}


	for (n=numStudent-1;n>=0;n--){
		printf("%s %d %d",myStudent[n].name,myStudent[n].english,myStudent[n].math);
	}
	return 0;
}
