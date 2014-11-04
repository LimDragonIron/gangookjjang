#include <stdio.h>
int main(void){
int a,b,sum;


	for(a=2 ;a<9;a+=2){
		for(b=1;b<9;b++){
			sum=a*b;
			if(a==b){
			printf("%d * %d = %d\n",a,b,sum);
			break;
			}
			else
			printf("%d * %d = %d\n",a,b,sum);
			continue	;
		}
	}
}