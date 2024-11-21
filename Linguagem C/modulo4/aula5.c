/**
 * Realize a implementação de um sistema bancário simples em linguagem C, em que cada cliente possui uma conta com saldo. Desenvolva funções que realizem operações bancárias básicas, como depósito, saque e transferência, utilizando conceitos avançados de passagem de parâmetros.

Definição da Estrutura: declare uma estrutura chamada Conta que contenha informações como número da conta, nome do titular e saldo.
Função para Depósito: crie uma função chamada realizarDeposito que permita ao cliente realizar um depósito em sua conta. A função deve receber como parâmetros a estrutura da conta e o valor a ser depositado.
Função para Saque: implemente a função realizarSaque que permita ao cliente fazer um saque de sua conta. A função deve validar se há saldo suficiente antes de efetuar o saque.
Função para Transferência: desenvolva a função realizarTransferencia que permita transferir um valor de uma conta para outra. A função deve receber as estruturas de ambas as contas e o valor a ser transferido.
Apresentação de Resultados: no programa principal (main), crie duas instâncias da estrutura Conta para representar duas contas diferentes. Solicite ao usuário que realize operações como depósito, saque e transferência entre as contas. Utilize as funções desenvolvidas para efetuar as operações e apresente o saldo final das contas após cada transação.
Tratamento de Erros: implemente mecanismos de tratamento de erros, como a verificação de saldo insuficiente durante saques e transferências, e mensagens explicativas para o usuário.
Como a escolha entre usar um procedimento ou uma função pode afetar a estrutura e o fluxo do seu código?
Como a escolha entre passagem por valor e por referência pode impactar a eficiência e o comportamento de um programa?
Em que situações as funções recursivas podem ser mais vantajosas do que soluções iterativas?
 */

#include <stdio.h>

struct Conta
{

    int numero;

    char titular[50];

    float saldo;
};

void realizarDeposito(struct Conta *conta, float valor)
{

    conta->saldo += valor;
}

int realizarSaque(struct Conta *conta, float valor)
{

    if (conta->saldo >= valor)
    {

        conta->saldo -= valor;

        return 1; // Saque bem-sucedido
    }
    else
    {

        printf("Saldo insuficiente para realizar o saque.\n");

        return 0; // Saque mal-sucedido
    }
}

int realizarTransferencia(struct Conta *origem, struct Conta *destino, float valor)
{

    if (realizarSaque(origem, valor))
    {

        realizarDeposito(destino, valor);

        return 1; // Transferência bem-sucedida
    }
    else
    {

        printf("Transferência mal-sucedida.\n");

        return 0; // Transferência mal-sucedida
    }
}

int main()
{

    // Criação de duas instâncias da estrutura Conta

    struct Conta contas[2] = {{1, "Cliente1", 1000.0}, {2, "Cliente2", 500.0}};

    int op, cc, cc2;

    float valor = 0;

    do
    {

        printf("\n BOLSOFURADO BANK \n\n");

        printf(" Saldo Conta 1: R$%.2f\n", contas[0].saldo);

        printf(" Saldo Conta 2: R$%.2f\n\n", contas[1].saldo);

        printf(" 1 - Deposito\n");

        printf(" 2 - Saque\n");

        printf(" 3 - Transferencia\n");

        printf(" 4 - Sair\n");

        printf("\n Escolha uma opção: ");

        scanf("%d", &op);

        switch (op)

        {

        case 1:

            printf("\n Qual a conta para deposito? ");

            scanf("%d", &cc);

            printf(" Qual o valor? ");

            scanf("%f", &valor);

            realizarDeposito(&contas[cc - 1], valor);

            break;

        case 2:

            printf("\n Qual a conta para saque? ");

            scanf("%d", &cc);

            printf(" Qual o valor? ");

            scanf("%f", &valor);

            realizarSaque(&contas[cc - 1], valor);

            break;

        case 3:

            printf("\n Qual a conta de origem? ");

            scanf("%d", &cc);

            printf(" Qual a conta de destino? ");

            scanf("%d", &cc2);

            printf(" Qual o valor? ");

            scanf("%f", &valor);

            realizarTransferencia(&contas[cc - 1], &contas[cc2 - 1], valor);

            break;

        default:

            break;
        }

    } while (op < 4);

    return 0;
}