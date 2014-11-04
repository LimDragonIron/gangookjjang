#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int *Array;
	int index;
	int Size;
	scanf("%d",&Size);
	Array=(int*)malloc(Size*sizeof(int));
	for(index=0;index<Size;index++){
		Array[index] = index;
	}
	
	for(index=Size-1;index>=0;index--){
		printf("%d\n",Array[index]);
	}
	
	free(Array);
	return 0;
}