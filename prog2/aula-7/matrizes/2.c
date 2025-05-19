/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");
    int matriz[5][5], i, j;
    // Preenchendo a matriz com 0
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }
    // Preenchendo a diagonal principal com 1
    for (i = 0; i < 5; i++) {
        matriz[i][i] = 1;
    }
    // Exibindo a matriz
    printf("Matriz 5x5 com 1 na diagonal principal:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}