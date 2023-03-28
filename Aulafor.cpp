#include <stdio.h>
int main(){
	int i,n=0,soma=n;
	printf("digite valores inteiros\n\n\n");
	for(i=0;i<3;i++){
		printf("digite um valor:");
		scanf("%d", &n);
		soma=soma+n;
	
	}
	printf("a soma dos valores eh:%d", soma);
	
	return 0;
}
