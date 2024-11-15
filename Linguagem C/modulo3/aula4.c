int ano = 2018;

int *ponteiro_para_ano = &ano;

printf("Conteudo do ponteiro: %p", ponteiro_para_ano);

printf("Conteudo da variavel pelo ponteiro: %d", *ponteiro_para_ano);

printf("Endereco do ponteiro: %p", &ponteiro_para_ano);

int *ponteiro = NULL;

if (ponteiro == NULL)
{

    printf("O ponteiro está apontando para NULL\n");
}

p++;

// soma +1 no endereço armazenado no ponteiro.

p--;

// subtrai 1 no endereço armazenado no ponteiro.

(*p)++;

// incrementar o conteúdo da variável apontada pelo ponteiro p;

*p = (*p) * 10;

// multiplica o conteúdo da variável apontada pelo ponteiro p por 10;

int numeros[5] = {10, 20, 30, 40, 50};

int *ponteiro = &numeros[0];

// Acessando o primeiro elemento

int primeiro_elemento = *ponteiro;

// Acessando o terceiro elemento

int terceiro_elemento = *(ponteiro + 2);

// Avançando para o próximo elemento

ponteiro++; // Agora aponta para o segundo elemento

// Voltando um elemento

ponteiro--; // Volta para o primeiro elemento

int a = 5;

int *ptr1 = &a;

int *ptr2 = &a;

if (ptr1 == ptr2)
{

    printf("Os ponteiros apontam para o mesmo endereço de memória.\n");
}
else
{

    printf("Os ponteiros apontam para endereços de memória diferentes.\n");
}

int numeros[5] = {10, 20, 30, 40, 50};

int *ptr1 = &numeros[2];

int *ptr2 = &numeros[4];

if (ptr1 < ptr2)
{

    printf("ptr1 aponta para um endereço mais baixo do que ptr2.\n");
}

#include <stdio.h>

struct aluno
{

    int mat;

    float nota;
};

int main()
{

    struct aluno joao;

    struct aluno *ptr; // declaração do ponteiro para struct

    // Inicialização da struct declarada

    joao.mat = 1000;

    joao.nota = 8.5;

    // inicialização do ponteiro ptr

    ptr = &joao;

    printf(“% d”, ptr->mat); // impressão do atributo nome através do ponteiro

    printf(“% f”, ptr->nota); // impressão do atributo nota através do ponteiro

    return 0;
}
#include <stdio.h>

int main()
{

    char *ptr;

    int i;

    char vet[5] = {'a', 'b', 'c', 'd', 'e'};

    ptr = vet; // A variavel ponteiro ptr   aponta para o primeiro elemento do   vetor

    for (i = 0; i < 5; i++)
    {

        // conteudo do vetor acessado pela variavel

printf("\n Vet[%d] = %c, i, vet[i]);

// conteudo do vetor acessado pelo ponteiro

printf("\n ptr = %c", *ptr);

ptr++;
    }

    return 0;
}

#include <stdio.h>

int main()
{

    int vetor[5] = {1, 2, 3, 4, 5};

    int *ponteiro = vetor; // Associando o ponteiro ao vetor

    for (int i = 0; i < 5; i++)
    {

        *(ponteiro + i) += 10;
    }

    printf("Elementos do vetor após adicionar 10:\n");

    for (int i = 0; i < 5; i++)
    {

        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}