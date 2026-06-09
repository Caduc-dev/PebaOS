#include <stdio.h>
#include <string.h>
#include "login.h"

int login() {

    char username[50];
    char password[50];

    printf("Digite seu nome de usuario: ");
    scanf("%s", username);

    printf("Digite sua senha: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0) {
        printf("Login bem-sucedido! Bem-vindo, %s!\n", username);
        return 1;
    } 

        printf("Login falhou! Nome de usuario ou senha incorretos.\n");
        return 0;

}