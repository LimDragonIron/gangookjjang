#include<stdio.h>
#pragma warning(disable:4496)

typedef struct _CHAIR{
	char model[32];
	int price;
	char size;
}CHAIR;

void Input(CHAIR* pChair);
void Output(const CHAIR* pChair);

void main(){
	CHAIR chair;

	 Input(&chair);
	 Output(&chair);

}
void Input(CHAIR* pChair){
	printf("[�Է�]\n");
	printf("[�� :]");
	scanf("%s",pChair->model);
	printf("����:");
	scanf("%d",&pChair->price);	fflush(stdin);
	printf("ũ��:");
	scanf("%c",&pChair->size);
}
void Output(const CHAIR* pChair){

	printf("[���]\n");
	printf("[��] :%s]\n",pChair->model);
	printf("[����]:%d\n",pChair->price);
	printf("[ũ��]:%c\n",pChair->size);
}