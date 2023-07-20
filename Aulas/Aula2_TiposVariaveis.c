/* Aula 2 - Tipos de Variáveis */

/*
Tipo de Variável            Python            C
Integer (Inteiro)            int             int
Float (Flutuante/real)      float      double ou float
Character/String             str          char/char[] <- com [] para texto e sem para caractere
Boolean (Lógico)            bool             int

Todas as variáveis são criadas usando

int x (no lugar de int, escrever o tipo desejado e no do x, o nome da variável)
E depois
x = valor_desejado

Caso não seja atribuido nenhum valor, a variável pegará um valor de lixo de memória, ou seja, um valor aleatório que estava solto nela
Para printar uma variável se faz assim
printf("Nome: %d", x) Coloca-se o %d e depois uma virgula e o nome da variável (parecido com uma das formas de formatação que aprendi com o Luis Otávio em Python)

Antigamente o tipo int aceitava numeros de até 16 bits, o que o limitava de -32767 até 32767, no entanto havia o tipo long int, que aceitava até 32 bits, indo de -2147483648 até 2147483648, posteriormente o tipo long int foi incorporado ao tipo int, hoje o tipo long int (também chamado de long long int por ser meio que a segunda versão do long int) existe mas se aplica a números de pelo menos 32 bits, indo de -9223372036854775807 até 9223372036854775807, tendo, portanto, uma faixa muita maior

Os números reais em C podem ser declarados de duas formas (float e double), float necessita de menos espaço de memória (4 bytes, 32 bits) e double requer mais (8 bytes, 64 bits), no entanto números double possuem o dobro de precisão de números float, exibindo o dobro de casas decimais (15 mais ou menos, enquanto floats exibem de 6 a 7)

Strings podem ser divididas entre caracteres e textos, se for respresentar um caractere, deve-se usar aspas simples: 'F'. Já textos, deve-se usar aspas duplas: "Olá", além disso, textos devem ser armazenados em variáveis em forma de vetor: char[], enquanto caracteres podem ir em variáveis cha

Valores lógicos em C são numéricos e representados por inteiros, valores falsos são o número 0 e verdadeiros qualquer número diferente de 0


C é uma linguagem de tipagem forte e estática, ou seja, deve-se declarar o tipo de variável antes ou enquanto dá o valor à ela e também não se pode realizar algum tipo de conexão entre variáveis do mesmo tipo sem que haja conversão esplícita dos valores para se adequarem


Para declarar uma variável, dá pra fazer separado ou junto:
Separado:
int x;
x = 10;

Junto:
int x = 10;

Atribuindo strings longas e curtas:
Para caracteres é possivel fazer assim:
char y = 'F';  Não esqueça de usar aspas simples para caracteres sozinhos

Para textos é mais complicado
*/
// Declaração de variável de texto em C
#include <stdio.h> // Pra comandos de entrada e saída
#include <string.h> // para manipular strings

int main() {
    
    char var_texto[100];
    strcpy(var_texto, "Insira seu texto aqui"); // Deu pra ver que a linguagem C é de um nível mais baixo que Python
    char nome[20] = "Joao Vitor";
    printf("Nome: %s", nome);

    return 0;
}
