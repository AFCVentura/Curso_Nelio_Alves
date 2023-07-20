/* Aula 4 - Saída de dados */


/*  Em C, a saída de dados requer o #include <stdio.h> e o comando usado é o printf()
Para colocar variáveis na saída, devem-se usar os seguintes placeholder para cada tipo:
int                 %d ou %i
long int            %li
long long int       %lli
float               %f
double              %lf
char                %c
char[]              %s

depois disso, é preciso fechar a string, colocar uma vírgula e a variável depois, como em uma das formas de fazer em Python

\n serve para quebrar linha igual no Python, mas aqui é obrigatório pra quebrar



Por padrão, variáveis double são impressas com 6 casas decimais, mas é possível controlar isso da seguinte forma:

x = 2.34567
printf("%.2lf\n", x)  após a porcentagem, colocar .x sendo x o número de casas decimais

Ao contrário do Python, nesses casos ocorre o arredondamento para cima ou baixo dependendo do valor (5 pra cima é arredondado pra cima)
*/



#include <stdio.h>

int main() {

    char nome[50] = "Joao Vitor Ventura";
    int idade = 19;
    char endereco[100] = "Rua Amaro Jose Ventura";
    char sexo = 'M';
    double salario = 1250.0;

    printf("Me chamo %s, tenho %i anos e moro na %s, sou do sexo %c e meu salario e de R$%.2lf", nome, idade, endereco, sexo, salario);

    return 0;
}

