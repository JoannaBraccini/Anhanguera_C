#include <stdio.h>
/*
int main()
{

    int multiplicador = 0, resultado, num;

    printf("Tabuada de qual numero : ");

    scanf("%d", &num);

    while (multiplicador <= 10)

    {

        resultado = num * multiplicador;

        printf("\n%d", resultado);

        multiplicador = multiplicador + 1;
    }

    return 0;
}
*/
/*
int main()
{

  float metragem1 = 0, metragem2 = 0, resultado = 0;

  int resp;

  do
  {

      printf("Calculo de metros quadrados\n\n");

      printf("Digite a 1a metragem do terreno:");

      scanf("%f", &metragem1);

      printf("\nDigite a 2a metragem do terreno:");

      scanf("%f", &metragem2);

      resultado = (metragem1 * metragem2);

      printf("\n\nTerreno tem = %.2f m2 \n", resultado);

      printf("Digite 1 para continuar ou 2 para sair\n");

      scanf("%d", &resp);

  } while (resp == 1); // condição de saída

  return 0;
}
*/
/*
int main()
{

  float soma = 0, valor;

  int opcao;

  do
  {

      printf("\n Digite uma Operação");

      printf("\n 1. Deposito");

      printf("\n 2. Saque");

      printf("\n 3. Saldo");

      printf("\n 4. Sair");

      printf("\n Qual opcao? ");

      scanf("%d", &opcao);

      switch (opcao)
      {

      case 1:

          printf("\n Valor do depósito? ");

          scanf("%f", &valor);

          soma = soma + valor;

          break;

      case 2:

          printf("\n Valor do saque? ");

          scanf("%f", &valor);

          soma = soma - valor;

          break;

      case 3:

          printf("\n Saldo atual = R$ %.2f \n", soma);

          break;

      default:

          if (opcao != 4)
          {

              printf("\n Opção Inválida! \n");
          }
      }

  } while (opcao != 4);

  printf("Fim das operações. \n\n");

  return 0;
}
*/
/*
int main()
{

  int num, i;

  printf("\n\nDigite um numero:\n");

  scanf("%d", &num);

  i = 0;

  while (num > 1)
  {

      if (num % 2 == 0)

          num /= 2;

      else

          num = 3 * num + 1;

      printf("\n%d\n", num);

      i++;
  }

  return 0;
}
*/
#include <string.h>

int main()
{

    int avalia, cont = 0, soma = 0;

    char letra;

    float media;

    do
    {

        printf("Digite uma nota para avaliação: \n");

        scanf("%d", &avalia);

        fflush(stdin); // limpa o buffer de entrada

        cont++;

        soma = soma + avalia;

        printf("Digite qualquer letra para continuar ou 's' para encerrar: \n");

    } while ((letra = getchar()) != 's');

    printf("\n \nQuantidade de avaliação = %d e soma das notas = %d. \n", cont, soma);

    media = soma / cont;

    system("PAUSE");

    return 0;
}