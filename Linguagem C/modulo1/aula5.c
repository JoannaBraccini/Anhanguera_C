/**
 * Você acabou se formar e possui um amplo conhecimento a respeito de programação, e por isso está à procura de trabalhos de desenvolvimento de software para enriquecer seu portfólio.

Sabendo disso, uma pizzaria do bairro onde mora o procurou, pois gostaria de automatizar seu caixa. A princípio, foi lhe solicitado apenas implementar um cálculo simples, em que, dado o valor total da conta de uma mesa, o programa divide esse valor pela quantidade de integrantes da mesa e calcula o desconto concedido. O programa deve receber como dados o valor da conta, a quantidade de pessoas e o percentual de desconto (%). Com os dados no programa, como deverá ser feito o cálculo do valor total da conta com o desconto e o valor que cada pessoa deverá pagar?
 */

#include <stdio.h>

int main()
{

    float valor_bruto = 0;

    float valor_liquido = 0;

    float desconto = 0;

    int qtd_pessoas = 0;

    printf("\n Digite o valor total da conta: ");

    scanf("%f", &valor_bruto);

    printf("\n Digite a quantidade de pessoas: ");

    scanf("%d", &qtd_pessoas);

    printf("\n Digite o desconto (em porcentagem): ");

    scanf("%f", &desconto);

    valor_liquido = valor_bruto - (valor_bruto * desconto / 100);

    printf("\n Valor da conta com desconto = %f", valor_liquido);

    printf("\n Valor a ser pago por pessoa = ");

    printf("%f", valor_liquido / qtd_pessoas);
}

/**
 * #include<stdio.h>: este é um pré-processador que inclui a biblioteca de entrada e saída padrão em C, permitindo o uso de funções como printf e scanf.
 main() { ... }: esta é a função principal do programa em C. O programa começa a execução a partir desta função.
Declaração de variáveis: as variáveis valor_bruto, valor_liquido, desconto e qtd_pessoas são declaradas e inicializadas. valor_bruto, valor_liquido e desconto são variáveis de ponto flutuante que armazenam valores monetários e percentuais, enquanto qtd_pessoas é uma variável inteira que armazena o número de pessoas.
Entrada do usuário: o programa solicita ao usuário que insira o valor total da conta, a quantidade de pessoas e o desconto em porcentagem. A função scanf é usada para armazenar os valores fornecidos pelo usuário nas variáveis apropriadas.
Cálculo (Processamento) do valor líquido: O valor líquido é calculado subtraindo o valor bruto do produto e do desconto, convertido em um valor decimal.
Saída de resultados: os valores do valor líquido da conta com desconto e do valor a ser pago por pessoa são impressos na tela utilizando a função printf.
 */