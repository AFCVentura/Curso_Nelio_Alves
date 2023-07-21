/* Aula 6 - Entrada de Dados */


// Em C, para usar o comando equivalente ao input, há dois comandos diferentes, um para entradas de valores simples/básicos: int, long int, long long int, float, double, char e char[] sem espaços, este comando é o scanf(), já para textos com espaços e quebras de linha, o comando é o fgets()

// Para usar o scanf(), é necessário usar os placeholders da mesma forma que nos comandos de saída:

/* #include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: "); // O comando scanf não permite imprimir a pergunta na tela, portanto é necessário usar o comando de print antes
    scanf("%i", &idade);  // É necessário colocar o & pois o comando scanf trabalha com a posição da variável na memória e não com o valor dela em si

    printf("Sua idade: %i anos", idade);
    return 0;
} 
*/

// Se você for usar o scanf() para variáveis de texto que contenham espaço, ele vai pegar apenas o que tiver antes do espaço
// Caso fosse fazer isso com uma variável que é vetor de texto (char[]), não precisa colocar o & antes da variável, pois o vetor já é um valor de referência na memória

// SOBRE O FGETS()

// O fgets() é mais complicado de usar pois, caso você tenha lido algum dado e realizado uma quebra de linha, o comando irá pegar a quebra de linha apenas:

/*
# include <string.h> // É necessário usar este include para usar o fgets

int main() {
    int idade;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    fgets(nome, 50, stdin);  // stdin é abreviação de standart input, pois é necessário colocar o local de onde vem a coleta de dados
    return 0;
}
*/

// Caso você faça da forma mostrada acima, o scanf irá pegar apenas a quebra de linha e salvar como se fosse uma string "Vazia" (não sei se é isso que ele salva, mas ele basicamente não imprime nada caso vc use o printf() depois)

// Para poder usar o fgets() depois de uma quebra de linha, é necessário limpar o buffer de entrada com um comando, na aula, o professor sugere criar uma função para isso:

# include <stdio.h>
# include <string.h>

void limpar_entrada() {  // O nome da função é da sua escolha
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int idade;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu nome: ");
    limpar_entrada();
    fgets(nome, 50, stdin); // Vale notar q o fgets lê até o enter que você dá no teclado
    strtok(nome, "\n"); // Este comando serve pra tirar a quebra de linha (que veio do enter do teclado) da variavel


    printf("Sua idade: %d\n", idade);
    printf("Seu nome: %s", nome);
    
    return 0;
}

// O professor sugere que crie uma função própria pra usar o fgets() e n precisar usar dois comandos sempre:

/*
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}
*/
// Ele não explica a função por ser algo mais avançado pro momento do curso mas é bem fácil de entender ela

// Para valores que são apenas um caractere, você pode usar o scanf(), mas tem que limpar o buffer de entrada antes de qualquer forma (usando aquela mesma função)


