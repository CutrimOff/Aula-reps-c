#include <stdio.h>
	int main ()
	{
		int senha;
		printf("A SENHA EH O ANO DA COPA MAIS RECENTE\n\n\n");
		printf("digite a senha:");
			scanf("%d", &senha);
		
		while(senha != 2022)
		{
			printf("\nsenha incorreta. \nTente novamente\n\n");
			printf("digite a senha:");
			scanf("%d", &senha);
			
		}
		printf("\nsenha correta. \nAcesso Autorizado\n");
		
		
		
		
		
		return 0;
	}
