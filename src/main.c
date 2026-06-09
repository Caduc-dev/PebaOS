#include <stdio.h>
#include "menu.h"
#include "login.h"

int main()
{

    printf("==================================\n");
    printf("|     Bem-vindo ao PebaOS!       |\n");
    printf("==================================\n");
    printf("\n");

    printf("Faca login para acessar o sistema.\n");
    printf("\n");

    while (login() == 0) {
        printf("Tente novamente.\n");
    }
    mostrarMenu();
    return 0;
}