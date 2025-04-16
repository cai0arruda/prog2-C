#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    // Declarando um vetor
    //Tipo nome[quantidade]
    // um vetor de 10 elementos tem indice de 0 a 9
    int vetor[10];
    // Declarar e inciar um vetor
    int numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Lendo um vetor do teclado
    for (int i = 0; i <10;){
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
        i++;
    }
    // Mostrando o vetor na tela
    printf("Os valores do vetor são: \n");
    for (int i = 0; i <10; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}