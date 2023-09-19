#include <stdio.h>
//registro em vetores

int main(){
	// registro
	struct pessoa{
		char nome[50];
		int idade;
	};
	
	
	struct pessoa cadastro;
	
	printf("Digite o nome de pessoas ");
	//scanf("%s", cadastro.nome);
	
	//fflush(stdin)
	
	fgets(cadastro.nome, 50, stdin);
	
	printf("Digite a idade da pessoa:");
	scanf("%d", &cadastro.idade);
	
	
	return 0;
}
