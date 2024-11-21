#include <stdio.h>

int testar(int *n1, int *n2)
{

    *n1 = -1; // é necessário usar * para acessar o conteúdo

    *n2 = -2;

    printf("\n\n Valores dentro da função testar(): ");

    printf("\n n1 = %d e n2 = %d", *n1, *n2);

    return 0;
}

int main()
{

    int n1 = 10;

    int n2 = 20;

    printf("\n\n Valores antes de chamar a função: ");

    printf("\n n1 = %d e n2 = %d", n1, n2);

    testar(&n1, &n2);

    printf("\n\n Valores depois de chamar a função: ");

    printf("\n n1 = %d e n2 = %d", n1, n2);

    return 0;
}

////////

#include <stdio.h>

void inserir(int a[])
{

    int i = 0;

    for (i = 0; i < 3; i++)
    {

        printf("Digite o valor %d: ", i);

        scanf("%d", &a[i]);
    }
}

void imprimir(int b[])
{

    int i = 0;

    for (i = 0; i < 3; i++)
    {

        printf("\n numeros[%d] = %d", i, 2 * b[i]);
    }
}

int main()
{

    int numeros[3];

    printf("\n Preenchendo o vetor... \n");

    inserir(numeros);

    printf("\n Dobro dos valores informados:");

    imprimir(numeros);

    return 0;
}

//////

#include <stdio.h>

struct Pessoa
{

    char nome[50];

    int idade;
};

void modificarPessoa(struct Pessoa *p)
{

    p->idade = 30;
}

int main()
{

    struct Pessoa pessoa1;

    strcpy(pessoa1.nome, "João");

    pessoa1.idade = 25;

    modificarPessoa(&pessoa1);

    printf("Nome: %s\n", pessoa1.nome);

    printf("Idade: %d\n", pessoa1.idade);

    return 0;
}

//////

#include <stdio.h>

void calcularPrecoTotal(float precoUnitario[], int quantidade[], int numItens, float *precoTotal)
{

    *precoTotal = 0;

    for (int i = 0; i < numItens; i++)
    {

        *precoTotal += precoUnitario[i] * quantidade[i];
    }
}

int main()
{

    int numItens;

    printf(" Digite o número de itens comprados: ");

    scanf("%d", &numItens);

    float precoUnitario[numItens];

    int quantidade[numItens];

    float precoTotal;

    // Entrada dos preços unitários e quantidades de cada item

    for (int i = 0; i < numItens; i++)
    {

        printf("\n Digite o preço unitário do item %d: ", i + 1);

        scanf("%f", &precoUnitario[i]);

        printf(" Digite a quantidade do item %d: ", i + 1);

        scanf("%d", &quantidade[i]);
    }

    // Chamada da função para calcular o preço total

    calcularPrecoTotal(precoUnitario, quantidade, numItens, &precoTotal);

    // Exibindo o preço total da compra

    printf("\n Preço total da compra: R$ %.2f\n\n", precoTotal);

    return 0;
}