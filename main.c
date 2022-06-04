#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "EntradasSaidaPadrao.h"
#include "Cliente.h"
#define TAM 10

void menu()
{
    printf("Digite 1 - Le matriz!\n");
    printf("Digite 2 - Imprime matriz!\n");
    printf("Digite 3 - Le cliente! \n");
    printf("Digite 4 - Imprime cliente! \n");
    printf("Digite 0 - para sair do menu!\n");
}


int main()
{
    menu();

    setlocale(LC_ALL,"Portuguese");
    int controlador, tam;
    int i = 0, j = 0, k = 0, qtde = 0;
    int M = 0, N = 0, P = 0;
    Cliente *variado;


    printf("\nEntre com a quantidade de produtos (M): ");
    scanf("%d", &M);

    printf("Entre com a quantidade de pontos de manufatura (N): ");
    scanf("%d", &N);

    printf("Entre com a quantidade de Centros atacadistas (P): ");
    scanf("%d", &P);

    int mEstoque[M][N][P];

    for (i=0; i<M;i++ )
        for (j=0; j<N;j++ )
            for (k=0; k<P;k++ )
                mEstoque[i][j][k]=0;


    printf("\n\nDigite o numero que representa a opção desejada: ");
    scanf("%d", &controlador);

    while((controlador < 0) || (controlador > 4))
    {
        menu();

        printf("\n\nDigite o numero que representa a opção desejada: ");
        scanf("%d", &controlador);
    }

    while(controlador != 0)
    {
        switch(controlador)
        {
        case 1:
            LeEstoqueMatrizExplicita(M,N,P, mEstoque);
            break;
        case 2:

            EscreveMatrizExplicita(M,N,P,mEstoque);
            break;

        case 3:

            printf("Quantos clientes você deseja cadastrar: ");
            scanf(" %d", &tam);
            variado = CriaCliente(variado, tam);
            LeCadastro(variado, tam);

            break;

        case 4:

            EscreveCadastro(variado, tam);

            break;
        }

        menu();

        printf("\n\nDigite o numero que representa a opção desejada: ");
        scanf("%d", &controlador);
    }

    return 0;
}
