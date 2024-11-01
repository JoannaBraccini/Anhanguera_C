#include <stdio.h>
int main()
{
    int num;
    int num2 = 5;
    float num3;
    char caractere;
    num = 10;
    num3 = 2.5;
    caractere = 'a';

    int var;
    scanf("% d", &var);

    float a;
    float b;
    printf("\n Resposta : a = % .2f e b = % .2f\n", a, b);

    return 0;
}

/**
%d -> Exibe/lê um número inteiro
%f -> Exibe/lê um número em ponto flutuante (decimal)
%c -> Exibe/lê um caractere
%s -> Exibe/lê uma sequência de caracteres (string)
%e -> Exibe/lê um número em notação científica
 */