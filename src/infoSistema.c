#include <stdio.h>
#include "menu.h"

void mostrarSistema() {
    
    int opcao = 0;

    printf("================================\n");
    printf("|   Informacoes de sistema...  |\n");
    printf("================================\n");

    printf("Sistema: PebaOS\n");
    printf("Versao: 1.0\n");
    printf("Data de instalacao: 01/01/2023\n");
    printf("Fabricante: Pebinhagg\n");

    printf("Digite 0 para voltar ao menu: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 0:
           printf("Voltando ao menu...\n");
           return;
        
    }

    }