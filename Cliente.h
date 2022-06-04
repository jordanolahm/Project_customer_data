#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include "Data.h"

typedef struct
{
    int numCliente;
    char nome[50];
    Data dCadastro;
    Data dContato;
    char tel[14];
    char logradouro[50];
    int numEndereco;
    char complemento[30];
    char CEP[9];
    char bairro[30];
    char cidade[30];
}Cliente;

int LeCliente(Cliente *pCliente);
int EscreveCliente(Cliente *pCliente);
Cliente* CriaCliente(Cliente* variavel, int size);

int LeCadastro(Cliente *vCadastroClientes, int qtdeClientes);
int EscreveCadastro(Cliente *vCadastroClientes, int qtdeClientes);

#endif // CLIENTE_H_INCLUDED
