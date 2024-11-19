#include <stdio.h>

int somar()
{

    return 2 + 3;
}

int main()
{

    int resultado = 0;

    resultado = somar();

    printf("O resultado da função é = %d", resultado);

    return 0;
}

//////////
int somar(int x, int y)
{

    int s = 0;

    s = x + y;

    return s;
}

int main()
{

    int resultado = somar(4, 5);

    printf("O resultado da função é = %d", resultado);

    return 0;
}

////////

#include <stdio.h>

#include <stdlib.h>

int *gerarRandomico()
{

    static int r[10];

    int a;

    for (a = 0; a < 10; ++a)
    {

        r[a] = rand() % 100; // “% 100” é usado para para limitar o rand a úmeros entre 0 e 99

        printf("r[% d] = % d\n", a, r[a]);
    }

    return r;
}

int main()
{

    int *p;

    int i;

    p = gerarRandomico();

    for (i = 0; i < 10; i++)
    {

        printf("\np[%d] = %d", i, *(p + i));
    }

    return 0;
}

////////

#include <stdio.h>

int calcularPeso()
{

    float b, c, h = 0;

    printf("\n Digite o valor da base: ");

    scanf("%f", &b);

    printf("\n Digite o valor da altura: ");

    scanf("%f", &h);

    printf("\n Digite o valor do comprimento: ");

    scanf("%f", &c);

    return (int)(b * h * c * 25); // o (int) é chamado de “cast” e é usado para garantir que o valor resultante será inteiro (se não o for, ele o converte)
}

int main()
{

    float peso;

    peso = calcularPeso();

    if (peso <= 500)
    {

        printf("\n O guindaste de modelo G1 deve ser usado");
    }
    else if (peso > 1500)
    {

        printf("\n O guindaste de modelo G3 deve ser usado");
    }
    else
    {

        printf("\n O guindaste de modelo G2 deve ser usado");
    }

    return 0;
}