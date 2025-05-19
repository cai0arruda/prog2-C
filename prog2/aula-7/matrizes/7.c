/*Leia uma matriz de 5x5 elementos. Calcule a soma dos elementos que estão na diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int matriz[5][5], i, j, somaDiagonal = 0;
    // Preenchendo a matriz
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um valor para a matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    // Exibindo a matriz
    for(i = 0; i < 5; i++){
        for(j = 0; j <5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Calculando a soma da diagonal principal
    for(i = 0; i <5; i++){
        somaDiagonal = somaDiagonal + matriz[i][i];
    }
    // Exibindo o resultado
    printf("A soma dos elementos da diagonal principal é: %d\n", somaDiagonal);
    return 0;
}