/******************************************************************************

Crie um programa em C que solicite ao usuário três números inteiros e, em seguida, execute as seguintes operações: 
1. Calcule a soma, subtração, multiplicação e divisão dos três números. 
2. Verifique, utilizando operadores relacionais, se o primeiro número é maior que o segundo, e se o segundo é menor que o terceiro.
3. Utilize operadores lógicos para verificar se o primeiro número é positivo e o segundo número é par. 
Caso ambas as condições sejam verdadeiras, o programa deverá exibir uma mensagem específica. 

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    //variáveis que vão armazenar os valores
    int num1, num2, num3;
    
    //solicitar ao usuário
    printf("Digite o primeiro número inteiro:\n");
    //armazenar valores
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro:\n");
    scanf("%d", &num2);
    printf("Digite o terceiro número inteiro:\n");
    scanf("%d", &num3);
    
    //operações aritméticas
    int soma = num1 + num2 + num3;
    int subtracao = num1 - num2 - num3;
    int multiplicacao = num1 * num2 * num3;
    int divisao = num1 / num2 / num3;
    
    printf("\nResultados das operações aritméticas:\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    
    //operações relacionais
    bool maiorQue = num1 > num2;
    bool menorQue = num2 < num3;
    
    printf("\nResultados dos operadores relacionais:\n");
    printf("Primeiro número maior que o segundo: %s\n", maiorQue ? "true" : "false");
    printf("Segundo número menor que o terceiro: %s\n", menorQue ? "true" : "false");
    
    //operadores lógicas
    bool primeiroPositivo = num1 > 0;
    bool segundoPar = num2 % 2 == 0;
    
    printf("\nResultados dos operadores lógicos:\n");
    
    if (primeiroPositivo && segundoPar) {
        printf("O primeiro número é positivo e o segundo número é par.\n");
    } else {
        printf("As condições não foram atendidas.\n");
    }

    return 0;
}