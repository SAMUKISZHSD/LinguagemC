#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char opcao[10];

    do {
        printf("========== Menu ==========\n");
        printf("1. Login\n");
        printf("2. Incluir Pessoa\n");
        printf("3. Excluir Pessoa\n");
        printf("4. Relatorio de Pessoas\n");
        printf("5. Sair\n");
        printf("==========================\n");
        printf("Escolha uma opcao: ");
        scanf("%s", opcao);

       
        switch (atoi(opcao)) {
            case 1:
               
                break;

            case 2:
                
                break;

            case 3:
                
                break;

            case 4:
               
                break;

            case 5:
               
                return 0;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (1);

    return 0;
}

  



