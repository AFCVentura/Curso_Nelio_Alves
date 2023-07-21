/* Aula 7 - Estrutura Condicional */

// A sintaxe do if, elif e else é bem simples em C (finalmente algo que é fácil nessa linguagem do cão)

// int main() {
//     if (condicao) {
//         comando
//         comando
//     }
//     else if (condicao) {
//         comando
//         comando
//     }
//     else {
//         comando
//         comando
//     }
//     return 0;
// }

// Exemplo:

# include <stdio.h>

int main() {
    int hora;
    printf("Digite uma hora do dia: ");
    scanf("%d", &hora);
    if (hora < 12) {
        printf("\n");
        printf("Bom dia\n");
    }
    else if (hora < 18) {
        printf("\n");
        printf("Boa tarde\n");
    }
    else if (hora < 24) {
        printf("\n");
        printf("Boa noite\n");
    }
    else {
        printf("Digite um valor valido \n");
    }
    return 0;
}