/* Ler uma matriz 4x4 de números inteiros, multiplicar os elementos da diagonal principal por um número inteiro também lido e escrever a matriz resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main (){
    SetConsoleOutputCP(65001);
    system("cls");
    int matriz[4][4], i, j, num;
    //preenchendo a matrizq
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor para a matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    //exibindo a matriz
    printf("Matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    //lendo o número
    printf("Digite um número para multiplicar os elementos da diagonal principal: ");
    scanf("%d", &num);
    //multiplicando os elementos da diagonal principal
    for(i = 0; i < 4; i++){
        matriz[i][i] = matriz[i][i] * num;
    }
    //exibindo a matriz resultante
    printf("Matriz resultante:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}