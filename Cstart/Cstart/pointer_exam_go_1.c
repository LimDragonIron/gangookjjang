#include<stdio.h>
#pragma warning(disable:4996)

void Hello(void);
void GoodNight(void);
void WhatsUp(void);

void  main (void ){
	void(* FnucArray[])(void)={Hello,GoodNight,WhatsUp};			// �Լ��� ������ �迭�� ���� //�Ϲ� �迭ó�� [] ��� {}<-�Լ��� ũ�⸸ŭ �ڵ� �迭�� �ڵ����� ����
	int menu;

	while(1){
		printf("[0] Quit [1] Hello [2]GoodNight[3] WhatsUp - ");
		scanf("%d",&menu);
		
		if(menu<0|| menu>3)
			continue;
	}
