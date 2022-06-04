#include "Cliente.h"

int LeCliente(Cliente *pCliente)
{
    if(!pCliente)
        return 0;

    printf("\nDigite o n° do Cliente: ");
    scanf(" %d", &pCliente->numCliente);

    printf("\nDigite o nome do Cliente: ");
    scanf(" %[^\n]s", pCliente->nome);

    printf("Digite a data de cadastro do Cliente: \n");
    LeData(&(pCliente->dCadastro));

    printf("Digite a data do ultimo contato do Cliente: \n");
    LeData(&(pCliente->dContato));

    printf("\nDigite o telefone do Cliente: ");
    scanf(" %[^\n]s", pCliente->tel);

    printf("\nDigite o logradouro do Cliente: ");
    scanf(" %[^\n]s", pCliente->logradouro);

    printf("\nDigite o n° do endereco do Cliente: ");
    scanf(" %d", &pCliente->numEndereco);

    printf("\nDigite o complemento do Cliente: ");
    scanf(" %[^\n]s", pCliente->complemento);

    printf("\nDigite o CEP do Cliente: ");
    scanf(" %[^\n]s", pCliente->CEP);

    printf("\nDigite o bairro do Cliente: ");
    scanf(" %[^\n]s", pCliente->bairro);

    printf("\nDigite o cidade do Cliente: ");
    scanf(" %[^\n]s", pCliente->cidade);

    return 1;
}
int EscreveCliente(Cliente *pCliente)
{
    if(!pCliente)
        return 0;

    printf("Cliente N°: %d\n", pCliente->numCliente);
    printf("Nome: %s\n", pCliente->nome);
    EscreveData(&(pCliente->dCadastro));
    EscreveData(&(pCliente->dContato));
    printf("Tel: %s\n", pCliente->tel);
    printf("Logradouro: %s\n", pCliente->logradouro);
    printf("Nº %d\n", pCliente->numEndereco);
    printf("Complemento: %s\n", pCliente->complemento);
    printf("CEP: %s\n", pCliente->CEP);
    printf("Bairro: %s\n", pCliente->bairro);
    printf("Cidade: %s\n", pCliente->cidade);

    return 1;
}

int LeCadastro(Cliente *vCadastroClientes, int qtdeClientes)
{
    if(!vCadastroClientes)
        return 0;

    int i;

    for(i = 0; i < qtdeClientes; i++)
        LeCliente(&vCadastroClientes[i]);

    return 1;
}

Cliente* CriaCliente(Cliente* variavel, int size)
{
    variavel = (Cliente*)malloc(size * sizeof(Cliente));

    return variavel;
}

int EscreveCadastro(Cliente *vCadastroClientes, int qtdeClientes)
{
    if(!vCadastroClientes)
        return 0;

    int i;

    for(i = 0; i < qtdeClientes; i++)
        EscreveCliente(&vCadastroClientes[i]);

    return 1;
}
