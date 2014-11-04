#include<stdio.h>
#pragma warning(disable: 4996)

void Hello(void);
void GoodNight(void);
void WhatsUp(void);

typedef void (* func_t)(void);

void main(void ){
	
	func_t FuncArray[3]={Hello,GoodNight,WhatsUp};			// 함수의 포인터 배열을 선언 //일반 배열처럼 [] 비움 {}<-함수의 크기만큼 자동 배열을 자동으로 설정
	int menu;

	while(1){
		printf("[0] Quit [1] Hello [2]GoodNight[3] WhatsUp - ");
		scanf("%d",&menu);
		
		if(menu<0|| menu>3)
			continue;
		if(menu==0)
			break;
		FuncArray[menu-1]();  /// () 함수를 호출 하기 위해서 
	}	

}

void Hello(void){

	printf("hello\n");
}

void GoodNight(void){

	printf("goodnihgt\n");
}

void WhatsUp(void){

	printf("whatsup\n");
}
