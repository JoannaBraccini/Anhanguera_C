#include <stdio.h>
/*
int main()
{

    int multiplicador, resultado, num;

    printf("Tabuada de qual numero : ");

    scanf("%d", &num);

    for (multiplicador = 10; multiplicador < 10; multiplicador++)

    {

        resultado = num * multiplicador;

        printf("%d", resultado);
    }

    return 0;
}
*/
/*
int main()
{

  int multi, num;

  for (num = 1; num <= 5; num++)
  {

      for (multi = 1; multi <= 10; multi++)
      {

          printf("% d", num * multi);
      }

      printf("\n");
  }

  return 0;
}
*/
/*
int main()
{

  for (int x = 10, y = 0; x >= 0, y <= 10; x--, y++)
  {

      printf("x = %d, y = %d\n", x, y);
  }

  return 0;
}
*/
/*
int main()
{

  int n;

  unsigned long long fatorial = 1; // Usamos "unsigned long long" para armazenar números grandes

  printf("Digite um número inteiro positivo: ");

  scanf("%d", &n);

  // Verificação para números negativos

  if (n < 0)
  {

      printf("O fatorial não está definido para números negativos.\n");
  }
  else
  {

      for (int i = 1; i <= n; i++)
      {

          fatorial *= i;
      }

      printf("O fatorial de %d é %llu\n", n, fatorial);
  }

  return 0;
}
*/
int main()
{

    int linhas, espacos, asteriscos;

    printf("Digite o número de linhas do triângulo: ");

    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++)
    {

        for (espacos = 1; espacos <= linhas - i; espacos++)
        {

            printf(" ");
        }

        for (asteriscos = 1; asteriscos <= 2 * i - 1; asteriscos++)
        {

            printf("*");
        }

        printf("\n");
    }

    return 0;
}