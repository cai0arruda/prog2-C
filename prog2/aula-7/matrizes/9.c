/*Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int matriz[5][5], i, j, x;
    // preenchendo a matriz
    for(i = 0; i <5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um valor para a matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    // elemento a ser buscado
    int encontrado = 0;
    printf("Digite um valor para buscar na matriz: ");
    scanf("%d", &x);
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if (matriz[i][j] == x) {
                printf("Valor encontrado na linha %d e coluna %d\n", i, j);
                encontrado = 1;
            }
        }
    }
    if (encontrado == 0) {
        printf("Valor não encontrado na matriz.\n");
    }
    // exibindo a matriz
    printf("\nMatriz 5x5:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%d / %d - %d] ", i, j, matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}