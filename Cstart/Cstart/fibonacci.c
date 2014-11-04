#include <stdio.h>
#define max 100
int fibonacci(int n);
void main (){
int a =10;
fibonacci(a);
printf("%d",fibonacci(a));
printf("%d",a);
}

int fibonacci(int n){
	int F[max]={0,1};
	int i;
		for(i=2;i<n;)
			F[i]=F[i-2]+F[i-1];
			return F[i];
	}