#include "EntradasSaidaPadrao.h"


int LeEstoqueMatrizExplicita(int M, int N, int P, int mEstoque[M][N][P])
{
    int i = 0, j = 0, k = 0, qtde = 0,temp;
    if(M <= 0 || N <= 0 || P <= 0)
        return 0;
    while((i >= 0) || (j >= 0) || (k >= 0))
    {
        printf ("Insira M, N e P: ");
        scanf ("%d", &i);

        if(i == -1)
            break;

        scanf ("%d", &j);

        if(i == -1)
            break;
        scanf ("%d", &k);

        if(i == -1)
            break;

        if (i >= 0 && j >= 0 && k >= 0 && i < M && j < N && k < P)
        {
            printf ("Insira a qnt do produto: ");
            scanf ("%d", &temp);
            if (temp > 0)
            {
                mEstoque[i][j][k] += temp;
            }
        }
    }

    return 1;
}

int LeEstoqueMatrizPonteiro (int ***mEstoque, int M, int N, int P)
{
    if(!mEstoque)
        return 0;

    int i = 0, j = 0, k = 0, qtde = 0;

    if(M <= 0 || N <= 0 || P <= 0)
        return 0;

    printf("Digite o num. do produto: ");
    scanf("%d", &i);
    printf("Digite o num. do ponto de manufatura: ");
    scanf("%d", &j);
    printf("Digite o num. do centro atacadista: ");
    scanf("%d", &k);

    while(i != -1 || j != -1 || k != -1)
    {
        if(i >= M || j >= N || k >= P)
            return 0;

        printf("Digite a quantidade: ");
        scanf("%d", &qtde);

        mEstoque[i][j][k] += qtde;

        printf("Digite o num. do produto: ");
        scanf("%d", &i);
        printf("Digite o num. do ponto de manufatura: ");
        scanf("%d", &j);
        printf("Digite o num. do centro atacadista: ");
        scanf("%d", &k);
    }

    return 1;
}

int EscreveMatrizExplicita(int M, int N, int P, int mEstoque[M][N][P])
{
    int i, j, k;

    if(M <= 0 || N <= 0 || P <= 0)
        return 0;

    printf("Codigo Produto - Codigo Fabrica - Codigo C.Atacadista - Itens total \n");

    for(i = 0; i<M; i++)
        for(j = 0; j<N; j++)
            for(k = 0; k<P; k++)
                    if(mEstoque[i][j][k] != 0)
                        printf("\t%d\t%d\t%d\t%d\n", i+1, j+1, k+1, mEstoque[i][j][k]);

            return 1;
}

int EscreveEstoqueMatrizPonteiro(int ***mEstoque, int M, int N, int P)
{
    int i, j, k;
     if(M <= 0 || N <= 0 || P <= 0)
        return 0;

     printf("Codigo Produto - Codigo Fabrica - Codigo C.Atacadista - Itens total \n");

    for(i = 0; i<M; i++)
        for(j = 0; j<N; j++)
            for(k = 0; k<P; k++)
                    if(mEstoque[i][j][k] != 0)
                        printf("\t%d\t\t   %d\t\t\t   %d\t\t\t   %d\n", i+1, j+1, k+1, mEstoque[i][j][k]);
    return 1;
}
