#include <stdio.h>
#include "infoSistema.h"

void mostrarMenu() {

    int opcao = 0;

    while (opcao != 2) {

    //cabeçalho do menu
    printf("==================================\n");
    printf("|        MENU PRINCIPAL          |\n"); 
    printf("==================================\n");

    //opções do menu

    printf("1 - Informacoes de sistema\n");
    printf("2 - Sair\n");

    printf("Digite a opcao desejada: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
           mostrarSistema();
           break;

        case 2:
           printf("Saindo do programa...\n");  
           break;

        default:
           printf("Opcao inválida. Tente novamente.\n");
           break;
    }
  } 
}