#include "Data.h"

int LeData(Data *pData)
{
    if(!pData)
        return 0;

    int d, m, a;

    printf("\nDigite o dia: ");
    scanf(" %d", &d);
    printf("\nDigite o mes: ");
    scanf(" %d", &m);
    printf("\nDigite o ano: ");
    scanf(" %d", &a);

    if(d <= 0 || m <= 0 || a <= 0)
        return 0;

    pData->ano = a;
    pData->mes = m;

    if(d <= 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
        pData->dia = d;
    else if(d <= 30 && (m == 4 || m == 6 || m == 9 || m == 11))
        pData->dia = d;
    else if(d <= 28 && m == 2)
        pData->dia = d;
    else
        return 0;


    return 1;
}

int EscreveData(Data *pData)
{
    if(!pData)
        return 0;

    printf("Data: %d/%d/%d\n", pData->dia, pData->mes, pData->ano);

    return 1;
}
