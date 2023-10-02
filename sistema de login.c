#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30]; // vetor senha da struct pessoa
} pessoa; pessoa p[1];  // diminuindo o nome da struct para "p" e o "[1]" é o máximo de pessoas com logins e senhas


int main(){


    char login[30]; // responsável por armazenar a senha inserida pelo usuário
    char senha[30]; // responsável por armazenar a senha inserida pelo usuário

    strcpy(p[0].login, "Samuel"); // Definindo o login "Samuel" na struct
    strcpy(p[0].senha, "123"); // Definindo a senha "123"  na struct

    printf("\nlogin:");
    scanf("%s", login); // armazenando os dados inseridos pelo usuário para o vetor login que está dentro da função main

    printf("\nsenha:");
    scanf("%s", senha); // armazenando os dados inseridos pelo usuário para o vetor senha que está dentro da função main

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){ // A função strcmp é responsável por comparar string com string
        printf("Usuario logado"); // se os vetores de dentro da struct tiver os mesmos dados do vetor interno da função main, usuário será logado.
    }else{
        printf("Login ou senha incorretos"); // senão, login ou senha incorreta.
    }
    return 0;
}


