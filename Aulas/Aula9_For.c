/* Aula 9 - Laço de Repetição - For */

// Em C, o for é um pouco diferente do Python, mas não muito difícil;

// int main() {
//     for (primeira_vez; condicao; incremento) {
//         comando
//         comando
//     }
//     return 0;
// }

// Reescrevendo em Python para comparar:

// for i in range(primeira_vez, última_vez, passo):
//     comando
//     comando

// Em Python, você coloca entre parênteses o valor inicial do 'i', o valor final e opcionalmente, o passo (progressão)
// Em C, você coloca o que acontece primeiro, a condição que será checada sempre que o for recomeçar e o que acontece toda vez que o for termina

// Exemplos em Python e C:

// Em Python:
// soma = 0
// for i in range(0, 5):
//     num = int(input("Digite um número inteiro: "))
//     soma += num
// print(f"A soma dos valores é: {soma}")

// Em C:
# include <stdio.h>

int main() {
    int soma, i, num;
    soma = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("Soma dos valores: %d", soma);
    return 0;
}

// Importante notar o seguinte: 
// (i = 1) mostra q o i começa valendo 1, é preciso ter declarado o i antes.
// (i <= 5) é a condição checada sempre, ou seja, sempre vai ser checado se i é menor ou igual a 5, se for, o laço acontece, se não, ele quebra.
// Também é legal notar que em Python, sempre tinha q se ter o cuidado de colocar um número a mais no range do for, visto que o i nunca atingia de fato o valor final do for, já aqui, caso a condição seja 'menor ou igual', ele vai aumentar até chegar, nesse caso não precisa colocar um a mais, pois ele vai checar a atingir o valor colocado. Não só isso, ele recebe o incremento antes de checar a variável, ou seja, ele vai terminar MAIOR que o valor colocado, o quão maior vai depender do incremento, mas nesse caso vai terminar sendo igual a 6
// (i++) é um comando de incremento de 1 em 1, esse comando faz com que o valor de i sempre aumente uma vez por ciclo, é como se fosse o passo mesmo, se fosse de mais de um seria só i += incremento_desejado