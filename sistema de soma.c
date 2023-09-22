#include <stdio.h>
#include <stdlib.h>

int main() {
	
    printf("Sistema de soma em C\n");
    system ("pause");
    
   
    float valor1, valor2, soma;

    printf("Digite um numero: ");
    scanf("%f", &valor1);

    printf("Digite outro numero: ");
    scanf("%f", &valor2);

    soma = valor1 + valor2;

    printf("O valor da soma de %.2f + %.2f = %.2f\n", valor1, valor2, soma);

    return 0;
}

