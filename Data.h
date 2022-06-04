#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
}Data;

int LeData(Data *pData);
int EscreveData(Data *pData);

#endif // DATA_H_INCLUDED
