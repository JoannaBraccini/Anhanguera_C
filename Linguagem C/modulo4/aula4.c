#include <stdio.h>

int somar(int valor)
{

    if (valor != 0)
    { // Critério de parada

        return valor + somar(valor - 1); // Chamada recursiva
    }
    else
    {

        return valor;
    }
}

int main()
{

    int n, resultado;

    printf("\nDigite um numero inteiro positivo: ");

    scanf("%d", &n);

    resultado = somar(n); // Fazendo a primeira chamada da função

    printf("\nResultado da soma = %d", resultado);

    return 0;
}

//////

#include <stdio.h>

int somar(int valor)
{

    if (valor != 0)
    { // Critério de parada

        return valor + somar(valor - 1); // Chamada recursiva
    }
    else
    {

        return valor;
    }
}

int main()
{

    int n, resultado;

    printf("\nDigite um numero inteiro positivo: ");

    scanf("%d", &n);

    resultado = somar(n); // Fazendo a primeira chamada da função

    printf("\nResultado da soma = %d", resultado);

    return 0;
}

//////

#include <stdio.h>

int fatorial(int valor)
{

    if (valor > 0)
    { // Critério de parada

        return valor * fatorial(valor - 1); // Chamada recursiva
    }
    else
    {

        return 1;
    }
}

int main()
{

    int n, resultado;

    printf("\nDigite um numero inteiro positivo: ");

    scanf("%d", &n);

    resultado = fatorial(n);

    printf("\nResultado do fatorial = %d", resultado);

    return 0;
}

//////

#include <stdio.h>

#include <math.h>

float calcularRaiz(float n, float raizAnt)
{

    float raiz = (pow(raizAnt, 2) + n) / (2 * raizAnt);

    if (fabs(raiz - raizAnt) < 0.001)

        return raiz;

    return calcularRaiz(n, raiz);
}

void main()
{

    float numero, raiz;

    printf("\nDigite um número para calcular a raiz: ");

    scanf("%f", &numero);

    raiz = calcularRaiz(numero, numero / 2);

    printf("\nRaiz quadrada: %f", raiz);
}