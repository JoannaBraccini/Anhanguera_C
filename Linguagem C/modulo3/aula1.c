#include <stdio.h>

int main()
{

    int idade[3];

    float altura[3] = {1, 1.5, 1.7};

    printf("\n Vetor altura[0] = %d", altura[0]);

    printf("\n Vetor altura[1] = %d", altura[1]);

    printf("\n Vetor altura[2] = %d", altura[2]);

    return 0;
}

int main()
{

    char nome[16] = {'J', 'o', 'a', 'o'};

    char sobrenome[31] = "Alberto Gomes";

    char frase[101] = {"Disciplina de Algoritmos"};

    char nome[16];

    printf("\n Digite um nome:");

    scanf("%s", nome);

    printf("\n Nome digitado: %s", nome);

    char frase[101];

    printf("\n Digite uma frase:");

    fflush(stdin);

    fgets(frase, 101, stdin);

    printf("\n Frase digitada: %s", frase);

    return 0;
}

int main()
{

    char cpf1[15]; // Vetor CPF formatado com pontos e traço

    char cpf2[11] = ""; // Vetor CPF sem formatação, inicializado como vazio

    int i = 0, n = 0;

    printf("Digite seu CPF na forma NNN.NNN.NNN-NN: \n");

    scanf("%s", cpf1);

    // Laço para percorrer todo o vetor cpf1

    // Remover pontos e traços e armazenar apenas os dígitos

    for (i = 0; i < 14; i++)
    {

        if (cpf1[i] == '.' || cpf1[i] == '-')
        {

            continue; // Ignora pontos e traços
        }
        else
        {

            // Armazena apenas os dígitos em cpf2

            cpf2[n] = cpf1[i];

            n++; // controla o tamanho do cpf2
        }
    }

    // Imprime o CPF formatado sem pontos e traços

    printf("\n\nCPF formatado = %s", cpf2);

    return 0;
}