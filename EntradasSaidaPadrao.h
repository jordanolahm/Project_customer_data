#ifndef ENTRADASSAIDAPADRAO_H_INCLUDED
#define ENTRADASSAIDAPADRAO_H_INCLUDED
#include <stdio.h>

int LeEstoqueMatrizExplicita(int M, int N, int P, int mEstoque[M][N][P]);
int LeEstoqueMatrizPonteiro (int ***mEstoque, int M, int N, int P);
int EscreveMatrizExplicita(int M, int N, int P, int mEstoque[M][N][P]);
int EscreveEstoqueMatrizPonteiro(int ***mEstoque, int M, int N, int P);

#endif // ENTRADASSAIDAPADRAO_H_INCLUDED
