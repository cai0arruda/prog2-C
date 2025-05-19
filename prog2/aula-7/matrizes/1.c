/*Ler 6 números inteiros para preencher uma matriz D 2x3, ou seja, com 2 linhas e 3 colunas (considere que não serão informados valores duplicados). A seguir, ler um número inteiro X e escrever uma mensagem indicando se o valor de X existe ou não na matriz D.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); // Configura o console para UTF-8
    system("cls");
    int d[2][3], i, j, x, encontrado = 0;
    // preenchendo a matriz
    for (i = 0; i <2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite um valor para a matriz D na posicao [%d][%d]: ", i, j);
            scanf("%d", &d[i][j]);
    }
    printf("\n");
    }
    // lendo o valor de x
    printf("Digite um valor para X: ");
    scanf("%d", &x);
    // imprimindo a matriz
    printf("Matriz D:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
    // verificando se x existe na matriz
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (d[i][j] == x) {
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }
    // exibindo o resultado
    if (encontrado) {
        printf("O valor %d existe na matriz D.\n", x);
    } else {
        printf("O valor %d nao existe na matriz D.\n", x);
    }
}