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
	printf("[입력]\n");
	printf("[모델 :]");
	scanf("%s",pChair->model);
	printf("가격:");
	scanf("%d",&pChair->price);	fflush(stdin);
	printf("크기:");
	scanf("%c",&pChair->size);
}
void Output(const CHAIR* pChair){

	printf("[출력]\n");
	printf("[모델] :%s]\n",pChair->model);
	printf("[가격]:%d\n",pChair->price);
	printf("[크기]:%c\n",pChair->size);
}