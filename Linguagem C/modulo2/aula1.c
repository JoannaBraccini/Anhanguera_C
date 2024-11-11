#include <stdio.h>
#include <locale.h>
/*
int main()
{
    // Define a localidade para permitir caracteres especiais
    if (setlocale(LC_ALL, "") == NULL)
    {
        printf("Erro ao definir a localidade.\n");
        return 1;
    }

    float idade;

    printf("Digite sua idade: \n");
    scanf("%f", &idade); // Remova o espaço extra

    if (idade >= 18)
    {
        printf("Você já pode tirar sua carteira de Habilitação, você é maior de 18.\n");
    }

    return 0;
}


int main()
{

    int num;

    printf("Digite um número : ");

    scanf("%d", &num);

    if (num > 0)
    {

        printf("\n\nO número e positivo\n");
    }

    else
    {

        printf("O número e negativo");
    }

    return 0;
}

int main()
{

    int num = 10;

    if (num < 100)

        printf("Menor que 100");

    else if (num < 1000)

        printf("Menor que 1000");

    else if (num < 10000)

        printf("Menor que 10000");

    else

        printf("Maior ou igual a 10000");

    return 0;
}

int main()
{

    char opcao;

    float valor, total;

    printf("\n Digite o valor da compra \n");

    scanf("%f", &valor);

    printf("\n Digite a letra que representa o desconto a ser aplicado:\n");

    printf("\ta - 10%% de desconto\n");

    printf("\tb - 15%% de desconto\n");

    printf("\n Digite sua opção:");

    scanf("%s", &opcao);

    switch (opcao)

    {

    case 'a':

        total = valor - (valor * 0.10);

        printf(" \nValor final da compra: R$ %.2f\n", total);

        break;

    case 'b':

        total = valor - (valor * 0.20);

        printf(" \nValor final da compra: R$ %.2f\n", total);

        break;

    default:

        printf("opcao invalida\n");
    }

    return 0;
}
*/
int main()
{

    float salario, inss, ir, sal_liquido;

    printf("Calculo de Salario Liquido Com desconto do IR e INSS\n\n");

    printf("\nDigite seu salario Bruto\n");

    scanf("%f", &salario);

    // Calcular o INSS

    if (salario <= 1320)

        inss = salario * 0.075;

    else if (salario >= 1320 && salario <= 2571.29)

        inss = salario * 0.09;

    else if (salario >= 2571.30 && salario <= 3856.94)

        inss = salario * 0.12;

    else if (salario >= 3856.95 && salario <= 7507.49)

        inss = salario * 0.14;

    else

        inss = 1051, 04; // teto de contribuição

    // Calcular o IR

    if (salario <= 1903.98)

        ir = salario * 0;

    else if (salario >= 1903.99 && salario <= 2826.65)

        ir = salario * 0.075;

    else if (salario >= 2826.66 && salario <= 3751.05)

        ir = salario * 0.15;

    else if (salario >= 3751.06 && salario <= 4664.68)

        ir = salario * 0.225;

    else if (salario > 4664.69)

        ir = salario * 0.275;

    // Calculo do Salario liquido

    sal_liquido = (salario - inss) - ir;

    // Resultados

    printf("\nDesconto do INSS e: %.2f\n\n", inss);

    printf("Desconto do imposto de renda e: %.2f\n\n", ir);

    printf("Salário líquido: %.2f\n\n", sal_liquido);

    return 0;
}