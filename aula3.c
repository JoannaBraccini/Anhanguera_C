#include <stdbool.h>

int main()
{

    int idade, num2;

    float salario = 7500;

    double qtd_atomos;

    bool confirma = false;

    char genero = 'M';

    return 0;
}
#include <stdio.h>

int main()
{

    char caractere;

    float valor1, valor2;

    printf("\n Digite um caractere qualquer:");

    scanf("%c", &caractere);

    printf("\n Digite o primeiro valor:");

    scanf("%f", &valor1);

    printf("\n Digite o segundo valor:");

    scanf("%f", &valor2);

    printf("Variável 1 = %c\n", caractere);

    printf("Variável 2 = %.2f\n", valor1);

    printf("Variável 3 = %.2f\n", valor2);

    return 0;
}

#include <stdio.h>

#define pi 3.14

int main()
{

    const float g = 9.8;

    printf("\n pi = % f", pi);

    printf("\n g = % f", g);

    return 0;
}

// Suponha que o preço de venda de um televisor seja de R$ 1500.00. Vamos considerar que a taxa de imposto aplicável seja de 10 %, e que haja um desconto padrão de 5 % para esse produto em particular. Aqui está um exemplo simplificado em linguagem C que poderia ser usado para calcular o preço final do televisor após a aplicação dos impostos e descontos:

#include <stdio.h>

int main()
{

    // Variáveis

    float precoVenda, valorImposto, valorDesconto, precoFinal;

    // Constantes

    const float taxaImposto = 0.1;

    const float descontoPadrao = 0.05;

    // Entrada

    printf("Informe o preço de venda do produto: ");

    scanf("%f", &precoVenda);

    // Processamento

    valorImposto = precoVenda * taxaImposto;

    valorDesconto = precoVenda * descontoPadrao;

    precoFinal = precoVenda + valorImposto - valorDesconto;

    // Saída

    printf("O preço final do televisor é: R$ %.2f", precoFinal);

    return 0;
}