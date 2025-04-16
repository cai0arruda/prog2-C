#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    // Declarando variavel tamanho vetor
    int tam;
    printf("Qual o tamanho do vetor? ");
    scanf("%d", &tam);
    // Declarando um vetor
    int vetor[tam];
    for(int i = 0; i < tam; i++){
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    // Mostrando o vetor na tela
    printf("Os valores do vetor são: \n");
    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}