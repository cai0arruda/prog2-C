/*Ler duas matrizes, A 4x6 e B 4x6, e criar: 
a) uma matriz S que seja a soma de A e B (A+B) 
b) uma matriz D que seja a diferença de A e B (A-B)
 Escrever as matrizes S e D. 
*/

#include <stdio.h>
#include<stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int matA[4][6], matB[4][6];
    int matS[4][6], matD[4][6];
    int i, j;
    // Preenchendo a matriz A
    printf("Preencha a matriz A 4x6:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            printf("Digite um valor para A[%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("\n");
    // Preenchendo a matriz B
    printf("Preencha a matriz B 4x6:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            printf("Digite um valor para B[%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    printf("\n");
    // Exibindo a matriz A
    printf("Matriz A:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Exibindo a matriz B
    for (i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Calculando a soma das matrizes A e B
    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            matS[i][j] = matA[i][j] + matB[i][j];
        }
    }
    //calculando a diferença das matrizes A e B
    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            matD[i][j] = matA[i][j] - matB[i][j];
        }
    }
    // Exibindo a matriz S (soma)
    printf("Matriz S (A + B):\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            printf("%d ", matS[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Exibindo a matriz D (diferença)
    printf("Matriz D (A - B):\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            printf("%d ", matD[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}