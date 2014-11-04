#include<stdio.h>
#pragma warning(disable:4996)

void Hello(void);
void GoodNight(void);
void WhatsUp(void);

void  main (void ){
	void(* FnucArray[])(void)={Hello,GoodNight,WhatsUp};			// 함수의 포인터 배열을 선언 //일반 배열처럼 [] 비움 {}<-함수의 크기만큼 자동 배열을 자동으로 설정
	int menu;

	while(1){
		printf("[0] Quit [1] Hello [2]GoodNight[3] WhatsUp - ");
		scanf("%d",&menu);
		
		if(menu<0|| menu>3)
			continue;
	}
