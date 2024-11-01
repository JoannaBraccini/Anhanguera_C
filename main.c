#include <stdio.h> //biblioteca que é responsável pelas funções de entradas e saídas, como é o caso da função printf e scanf
/**
stdio – essa biblioteca é responsável pelas funções de entradas e saídas, como é o caso da função printf e scanf que vamos aprender mais à frente. Utilização: #include <stdio.h>
stdlib – essa biblioteca possui funções envolvendo alocação de memória, controle de processos, conversões e outras. Utilização: #include <stdlib.h>
string – biblioteca responsável pela manipulação de strings. Utilização: #include<string.h>
time – biblioteca utilizada para manipulação de horas e datas. Utilização: #include<time.h>
math – biblioteca utilizada para operações matemáticas. Utilização: #include<math.h>
 */

int main()
{
    int x;
    scanf("%d", &x);
    printf("Hello World! x=%d", x);

    return 0;
}