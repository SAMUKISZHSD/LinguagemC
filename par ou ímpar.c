#include <stdio.h>


int main() {
	
	//Neste programa, o usuário é solicitado a inserir um número. 
	//Em seguida, o programa verifica se o número é par ou ímpar usando o operador de módulo (%). 
	
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O numero %d eh par.\n", numero);
    } else {
        printf("O numero %d eh impar.\n", numero);
    }

    return 0;
}

