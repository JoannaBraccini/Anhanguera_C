#include <stdio.h>

int testar()
{

    int x = 10;

    return x;
}

int main()
{

    int x = 20;

    printf("\n Valor de x na funcao main() = %d", x);

    printf("\n Valor de x na funcao testar() = %d", testar());

    return 0;
}

////////

#include <stdio.h>

int x = 10;

int dobrar()
{

    return 2 * x;
}

int main()
{

    printf("\n Valor de x global = %d", x);

    printf("\n Valor de x global alterado na função dobrar() = %d", dobrar());

    return 0;
}

//////

#include <stdio.h>

float t1, t2;

float calcularMedia()
{

    return (t1 + t2) / 2;
}

int main()
{

    printf("\n Digite as duas temperaturas: ");

    scanf("%f %f", &t1, &t2);

    printf("\n A temperatura média = %.2f", calcularMedia());

    return 0;
}

///////

int x = 10;

int main()
{

    int x = -1;

    printf("\n Valor de x = %d", x);
}

//////

#include <stdio.h>

int x = 10;

int main()
{

    int x = -1;

    int b;

    {

        extern int x;

        b = x;
    }

    printf("\n Valor de x = % d", x);

    printf("\n Valor de b(x global) = % d", b);

    return 0;
}

//////

#include <stdio.h>

int somar(int a, int b)
{

    return a + b;
}

int main()
{

    int res;

    res = somar(10, 15);

    printf("\n Resultado da soma = %d", res);

    return 0;
}

//////

#include <stdio.h>

int testar(int n1, int n2)
{

    n1 = -1;

    n2 = -2;

    printf("\n\n Valores dentro da função testar(): ");

    printf("\n n1 = %d e n2 = %d", n1, n2);

    return 0;
}

int main()
{

    int n1 = 10;

    int n2 = 20;

    printf("\n\n Valores antes de chamar a função: ");

    printf("\n n1 = %d e n2 = %d", n1, n2);

    testar(n1, n2);

    printf("\n\n Valores depois de chamar a função: ");

    printf("\n n1 = %d e n2 = %d", n1, n2);

    return 0;
}

////////

#include <stdio.h>

float calcularMassa(float a, float b)
{

    const float mA = 321.43;

    const float mB = 150.72;

    printf("\n mol A : mol B ");

    printf("\n 1,2 : 1,0 \t= %f", 1.2 * mA + 1 * mB);

    printf("\n 1,4 : 1,0 \t= %f", 1.4 * mA + 1 * mB);

    printf("\n 1,6 : 1,0 \t= %f", 1 * mA + 1.6 * mB);

    return (a * mA) + (b * mB);
}

int main()
{

    float a = 0, b = 0, resultado = 0;

    printf("\n Digite as massas dos elementos A e B: ");

    scanf("%f %f", &a, &b);

    resultado = calcularMassa(a, b);

    printf("\n\n Massa final do composto = %.2f g/mol", resultado);

    return 0;
}