#include<stdio.h>
#include<string.h>

//programa em que lida com a entrada do usuário para o email e a senha, permitindo a adição de extensões como "@hotmail.com", "@outlook.com" ou "@gmail.com" com base nas escolhas do usuário

int main()
{

    char cmpemail[50];
    char cmpsenha[50];
    char cmpemailf[50];
    char cmpsenhaf[50];
    int x, y, z, cont;
    char hotmail[20]="@hotmail.com";
    char outlook[20]="@outlook.com";
    char gmail[20]="@gmail.com";


    struct Login {
        char email[50];
        char senha[50];
    };

    struct Login cadastro;

    printf("Digite o nome do administrador: ");
    scanf("%s", cadastro.email);

    printf("Digite a senha do administrador: ");
    scanf("%s", cadastro.senha);

    printf("Escolha a extensão: \n 1-hotmail.com\n 2-outlook.com\n 3-gmail.com\n:");
    scanf("%d", &z);
    //Apresenta o email e o nome cadastrados
    // printf("\nEmail: %s\n", cadastro.email);
    // printf("\nSenha: %s\n", cadastro.senha);


    if(z==1) {

        strcat(cadastro.email, hotmail);

    } else if(z==2) {

        strcat(cadastro.email, outlook);

    } else if(z==3) {

        strcat(cadastro.email, gmail);

    }
   
    strcpy(cmpemail, cadastro.email);
    strcpy(cmpsenha, cadastro.senha);

    struct Usuario {

        char emailf[50];
        char senhaf[50];

    };

    struct Usuario final;

    do {

        printf("Digite o nome do usuário: ");
        scanf("%s", final.emailf);

        printf("Digite a senha do usuário: ");
        scanf("%s", final.senhaf);

        printf("Escolha a extensão: \n 1-hotmail.com\n 2-outlook.com\n 3-gmail.com\n:");
        scanf("%d", &cont);

        strcpy(cmpemailf, final.emailf);
        strcpy(cmpsenhaf, final.senhaf);


        if(cont==1) {

            strcat(cmpemailf, hotmail);
            

        } else if(cont==2) {

            strcat(cmpemailf, outlook);

        } else if(cont==3) {

            strcat(cmpemailf, gmail);

        }

        x = strcmp(cmpemail, cmpemailf);
        y = strcmp(cmpsenha, cmpsenhaf);

        if(x == 0 && y == 0) {

            printf("\nEMAIL E SENHA APROVADOS, INICIANDO CONEXAO");

        } else {

            printf("Email ou senha incorretos\n");

        }

    } while(x > 1 || x < 0 || y > 1 || y < 0);


    printf("\nEmail usuário:%s ", cmpemailf);
    printf("\nSenha usuário:%s ", cmpsenhaf);

    return 0;
}
