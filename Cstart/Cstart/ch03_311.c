#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int score;
	struct Node *next;
}node;

node *first=NULL;

node *GetNode(){
	return (node*)malloc(sizeof(node));+

}

node *GetList(int value){

	node *pNode;
	pNode=GetNode();

	if(pNode==NULL){
		printf("empty!");
	}
	pNode->score=value;

	if(first==NULL)
		pNode->next=NULL;
	else
		pNode->next=first;
	first=pNode;
}

int main(){
	GetList(33);
	GetList(22);
	GetList(11);

	printf("%d",first->score);
	printf("%d",first->next->score);
	printf("%d",first->next->next->score);


	return 0;
}

