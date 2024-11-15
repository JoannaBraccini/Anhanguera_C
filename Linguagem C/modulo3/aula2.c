int coordenadas[3][2];

float temperaturas[5][2];

int valores[3][2] = {{2, 3}, {5, 7}, {9, 11}};

#include <stdio.h>

int main()
{

    float notas[3][2];

    // aluno 1

    notas[0][0] = 9.5;

    notas[0][1] = 10;

    // aluno 2

    notas[1][0] = 4.5;

    notas[1][1] = 6.2;

    // aluno 3

    notas[2][0] = 7;

    notas[2][1] = 8, 5;

    printf("Digite uma nota: ");
    int nota;
    scanf("%f", &nota[1][0]);

    printf("Nota digitada: %.2f", nota[1][0]);

    float notas[3][2];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            printf("digite a nota % d do aluno % d :", j + 1, i + 1);

            scanf("% f", &notas[i][j]);
        }
    }

    return 0;
}
int main()
{

    int matriz[3][3];

    int i, j, sDiagPrinc = 0, sDiagSec = 0;

    // Leitura da matriz

    printf("Digite os elementos da matriz 3x3:\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma da diagonal principal e secundária

    for (i = 0, j = 2; i < 3, j >= 0; i++, j--)
    {

        sDiagPrinc += matriz[i][i];

        sDiagSec += matriz[i][j];
    }

    printf("Soma dos elementos da diagonal principal: %d\n", sDiagPrinc);

    printf("Soma dos elementos da diagonal secundaria: %d\n", sDiagSec);

    return 0;
}

#include <stdio.h>

int main()
{

    int m, n, p, q, i, j, k;

    int soma = 0;

    printf("Digite as dimensões da primeira matriz (m x n): ");

    scanf("%d %d", &m, &n);

    printf("Digite as dimensões da segunda matriz (p x q): ");

    scanf("%d %d", &p, &q);

    // Verificação se a multiplicação é possível

    if (n != p)
    {

        printf("A multiplicação entre as matrizes não é possível.\n");

        return 0;
    }

    // Declaração e entrada dos elementos das matrizes

    int matriz1[m][n], matriz2[p][q], resultado[m][q];

    printf("Digite os elementos da primeira matriz:\n");

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {

            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");

    for (i = 0; i < p; i++)
    {

        for (j = 0; j < q; j++)
        {

            scanf("%d", &matriz2[i][j]);
        }
    }

    // Cálculo do produto das matrizes

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < q; j++)
        {

            for (k = 0; k < p; k++)
            {

                soma += matriz1[i][k] * matriz2[k][j];
            }

            resultado[i][j] = soma;

            soma = 0;
        }
    }

    printf("O produto das matrizes é:\n");

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < q; j++)
        {

            printf("%d\t", resultado[i][j]);
        }

        printf("\n");
    }

    return 0;
}

#define NUM_ALUNOS 3

#define NUM_DISCIPLINAS 3

int main()
{

    float notas[NUM_ALUNOS][NUM_DISCIPLINAS] = {{7.5, 8.0, 9.0}, {6.5, 7.0, 8.0}, {8.0, 7.5, 8.5}};

    float mediasAluno[NUM_ALUNOS];

    float mediaGeral, soma = 0;

    // Calcula a média das notas de cada aluno em cada disciplina

    for (int i = 0; i < NUM_ALUNOS; i++)
    {

        float soma = 0;

        for (int j = 0; j < NUM_DISCIPLINAS; j++)
        {

            soma += notas[i][j];
        }

        mediasAluno[i] = soma / NUM_DISCIPLINAS;
    }

    // Calcula a média geral de cada aluno em todas as disciplinas

    for (int i = 0; i < NUM_ALUNOS; i++)
    {

        soma += mediasAluno[i];
    }

    mediaGeral = soma / NUM_ALUNOS;

    // Imprime as médias de cada aluno em cada disciplina

    for (int i = 0; i < NUM_ALUNOS; i++)
    {

        printf("Média do aluno %d: %.2f\n", i + 1, mediasAluno[i]);
    }

    // Imprime a média geral de todos os alunos

    printf("Média geral de todos os alunos: %.2f\n", mediaGeral);

    return 0;
}