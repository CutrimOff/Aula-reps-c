#include <stdio.h>
int main (){
	int i, x, mult;
	printf("///////TABUADA//////\n\n");
	printf("tabuada de?");
	scanf("%d", &x);
	for(i=0;i<11;i++){
		mult = x * i;
		printf("\n%d*%d=%d", i, x, mult);	
	}
	return 0;
}
