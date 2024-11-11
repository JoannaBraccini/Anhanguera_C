#include <stdio.h>

int main()
{

    int x, y;

    x = 10;
    y = x++;

    printf("y = x++ : valor de y => %d\n", y);

    printf("y = x++ : valor de x => %d\n\n", x);

    x = 10;
    y = x--;

    printf("y = x-- : valor de y => %d\n", y);

    printf("y = x-- : valor de x => %d\n\n", x);

    x = 10;
    y = ++x;

    printf("y = ++x : valor de y => %d\n", y);

    printf("y = ++x : valor de x => %d\n\n", x);

    x = 10;
    y = --x;

    printf("y = --x : valor de y => %d\n", y);

    printf("y = --x : valor de x => %d\n\n", x);

    return 0;
}

#include <stdio.h>

int main()
{

    int n1, n2;

    printf("Digite o primeiro numero : ");

    scanf("% d", &n1);

    printf("Digite o segundo numero : ");

    scanf("% d", &n2);

    printf("\n n1 e n2 sao iguais? %d", n1 == n2);

    printf("\n n1 e maior que n2? %d", n1 > n2);

    printf("\n n1 e menor ou igual a n2? %d", n1 <= n2);

    return 0;
}

#include <stdio.h>

int main()
{

    int a = 5, b = 10, c = 5;

    printf("\n(a == b) && (a == c) = % d", ((a == b) && (a == c)));

    printf("\n(a == b) || (a == c) = % d", ((a == b) || (a == c)));

    printf("\n !(a == b) || (a == c) = % d", !((a == b) || (a == c)));

    return 0;
}

// Vamos proceder ao armazenamento dos dados utilizando variáveis simples.Para cada produto, criaremos três variáveis(uma para cada ano), conforme o exemplo :

int tv_2020, tv_2021, tv_2022;
int noteb_2020, noteb_2021, noteb_2022;
int smart_2020, smart_2021, smart_2022;

// Serão necessárias outras três variáveis para armazenar a média de cada ano:
float media_2020 = 0;
float media_2021 = 0;
float media_2022 = 0;

// Depois de inserir os dados, podemos prosseguir para o processamento das informações, que neste caso envolve calcular a média aritmética.Para isso, somamos os dados de cada ano, dividimos pelo número de ocorrências(três)
// e armazenamos na respectiva variável de média, conforme exemplificado abaixo :

media_2020 = (tv_2020 + noteb_2020 + smart_2020) / 3;

// Após calcular as médias dos demais anos, 2021 e 2022, você pode utilizar operadores relacionais e lógicos para determinar qual ano teve a maior média.Por exemplo, para verificar se 2020 teve a maior média de produtos vendidos, você pode usar o seguinte comando :

printf("2020 obteve a maior media? %d", ((media_2020 > media_2021) && (media_2020 > media_2022)));