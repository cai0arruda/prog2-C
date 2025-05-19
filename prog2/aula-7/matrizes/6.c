/*Gerar uma matriz quadrada aleatoriamente de 10x10 e imprimir a diagonal desta matriz*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");
    int matriz[10][10], i, j;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    //gerando a matriz
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 100; // Gera números aleatórios entre 0 e 99
        }
    }
    //exibindo a matriz
    printf("Matriz 10x10:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("[ %d ]", matriz[i][j]);
        }
        printf("\n");
    }
    //exibindo a diagonal
    printf("\nDiagonal da matriz:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    return 0;
}