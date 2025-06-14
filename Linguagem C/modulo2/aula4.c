#include <stdio.h>

int main()
{

    int numero_secreto = 7;

    int tentativa;

    printf("Adivinhe o número secreto!\n");

    while (1)
    { // Causa um loop infinito

        printf("Insira um número: ");

        scanf("%d", &tentativa);

        if (tentativa == numero_secreto)
        {

            printf("Parabéns! Você adivinhou o número secreto.\n");

            break; // Sai do loop quando o número correto é adivinhado
        }
        else
        {

            printf("Tente novamente!\n");
        }
    }

    return 0;
}

int main()
{

    for (int i = 1; i <= 20; i++)
    {

        if (i % 2 == 0)
        {

            continue; // Pula iterações com números pares
        }

        printf("%d ", i);
    }

    return 0;
}

int main()
{

    int numero;

    printf("Insira um número positivo: ");

    scanf("%d", &numero);

    if (numero <= 0)
    {

        goto erro; // Vai para o rótulo 'erro' se o número não for positivo
    }

    printf("Número válido: %d\n", numero);

    return 0;

erro: // Rótulo para manipular erro

    printf("Erro: Número inválido.\n");

    return 0;
}

#include <string.h>

int main()
{

    int total_disciplinas, limite_alunos = 100, total_alunos = 0;

    printf("Sistema de contagem de alunos matriculados!\n");

    printf("Insira o número de disciplinas disponíveis: ");

    scanf("%d", &total_disciplinas);

    for (int i = 1; i <= total_disciplinas; i++)
    {

        int alunos_matriculados;

        printf("Insira o número de alunos matriculados na disciplina %d: ", i);

        scanf("%d", &alunos_matriculados);

        // Verifica se o número de alunos matriculados é válido

        if (alunos_matriculados < 0)
        {

            printf("Número de alunos inválido. Tente novamente.\n");

            i--; // Volta para a mesma disciplina

            continue; // Pula para a próxima iteração do loop
        }

        total_alunos += alunos_matriculados;

        // Verifica se o limite de alunos foi atingido

        if (total_alunos >= limite_alunos)
        {

            printf("Limite de alunos atingido. Encerrando contagem de disciplinas.\n");

            break; // Encerra do loop de contagem de disciplinas
        }
    }

    printf("Total de disciplinas contadas: %d\n", total_disciplinas);

    printf("Total de alunos matriculados: %d\n", total_alunos);

    return 0;
}