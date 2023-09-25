#include <stdio.h>
#include <string.h>

#define MAX_EMAIL_LENGTH 50
#define MAX_SENHA_LENGTH 20

typedef struct {
    char email[MAX_EMAIL_LENGTH];
    char senha[MAX_SENHA_LENGTH];
} User;

User usuario;

void registerUser() {
    printf("Cadastre seu email e senha \n");
    printf("Digite seu Email:");
    scanf("%s", usuario.email);
    printf("Digite seu Senha:");
    scanf("%s", usuario.senha);
    printf("Usuario cadastrado com sucesso! \n");
}

void displayUser() {
    printf("Email: %s\n", usuario.email);
    printf("Senha: %s\n", usuario.senha);
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Registrar usuario\n");
        printf("2. Visualizar informacoes do usuario\n");
        printf("3. Sair\n");
        printf("Escolha a sua opcao: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser();
                break;

            case 2:
                displayUser();
                break;

            case 3:
                printf("Saindo do sistema...\n");
                break;

            default:
                printf("Opcao incorreta, selecione novamente\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
