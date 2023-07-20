/* Aula 5 - Processamento de dados e casting */

/* 
Em C há um controle mais rígido dos tipos de variáveis por ser forte e estática

Se você realizar uma operação salvando numa variável inteira que resulta em um valor inteiro, vai ser impresso inteiro
Se você realizar uma operação salvando em double mas operando um resultado inteiro, vai salvar em double com .000000
Se você realizar uma operação como divisão salvando em inteiro mas com resultado em double, ele vai entender que quer divisão inteira e deixar em inteiro (descartando o decimal)
Se você criar uma variável double e mandar uma int incorporar o valor dela, a int vai pegar apenas a parte inteira, tirando o decimal:

a = 4.5
b = a

'b' vai ser 4 e 'a' vai ser 4.5

Algumas linguagens não permitem isso e te obrigam a fazer 'casting', essa prática seria converter o valor para outro tipo de variável,tipo o int(a) par deixar o a em inteiro:

b = (int) a   Em C isso funciona também, mas não é necessário (Repare que tá ao contrário do python, o que vai dentro dos parenteses é o tipo e não o conteudo)

IMPORTANTE:

Se você quiser realizar uma operação de divisão (serve de exemplo, mas outras também) com dois valores inteiros, tipo:
int a, b;
double resultado;

a = 5;
b = 2;

resultado = a / b;

Resultado vai ser 2.000000, isso porque se você realizar uma divisão com dois inteiros, ele entende que você quer uma divisão inteira e retorna 2, depois ele vai transformar em double, ou seja, colocar o .000000

Para resolver isso, aí sim o casting se torna necessário:

a = 5;
b = 2;

resultado = (double) a / b;
*/

#include <stdio.h>;

int main() {

    int a = 5;
    int b = 2;
    double resultado;

    resultado = (double) a/b;

    return 0;
}