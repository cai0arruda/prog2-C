/*Leia uma matriz de 5x5 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.
Leia uma matriz de 5x5 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int matriz[5][5], i, j, somaAcima = 0, somaAbaixo = 0;
    // preenchendo a matriz
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um valor para a matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    // exibindo a matriz
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // calculando a soma dos elementos acima da diagonal principal
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i < j){
                somaAcima += matriz[i][j];
            }
            else if(i > j){
                somaAbaixo += matriz[i][j];
            }
        }
    }
    // exibindo os resultados
    printf("A soma dos elementos acima da diagonal principal é: %d\n", somaAcima);
    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", somaAbaixo);
    return 0;
}