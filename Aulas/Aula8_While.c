/* Aula 8 - Laço de Repetição - While */

// Em C a estrutura de repetição while também é bem simples:

// int main() {
//     while (condicao) {
//         comando
//         comando
//     }   
//     return 0;
// }

// exemplo:

# include <stdio.h>

int main() {

    int hora;
    while (1) { // Esta é a forma de colocar um while infinito (lá atrás foi dito que bool em C é 0 pra False e qualquer número pra True)
        printf("Digite uma hora do dia: ");
        scanf("%d", &hora);
        if (hora < 12) {
            printf("\n");
            printf("Bom dia\n");
            break;
        }
        else if (hora < 18) {
            printf("\n");
            printf("Boa tarde\n");
            break;
        }
        else if (hora < 24) {
            printf("\n");
            printf("Boa noite\n");
            break;
        }
        else {
            printf("Digite um valor valido \n");
            printf("\n");
        }

    }
    return 0;
}

// Interessante notar que o break também existe em C e é usado basicamente da mesma forma