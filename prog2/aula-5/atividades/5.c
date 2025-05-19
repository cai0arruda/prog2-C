/*Declare um vetor, gere números aleatórios para ele, em seguida realize a soma de todos os elementos do vetor, mostre o vetor e a soma*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    system("cls");
    SetConsoleOutputCP(65001);
    srand(time(NULL));
    // tamanho do vetor
    int tam;
    printf("Deseja que o vetor tenha qual tamanho? ");
    scanf("%d", &tam);
    // declarando e gerando o vetor
    int vetor[tam];
    for(int i = 0; i < tam; i++){
        vetor[i] = rand()%100;
    }

    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma = soma + vetor[i];
    }

    printf("\n --VETOR DE TAMANHO %d GERADO ALEATÓRIAMENTE-- \n", tam);
    for(int i = 0; i < tam; i++){
        printf("[%d] ", vetor[i]);
    }

    printf("\n SOMA DE TODOS OS VALORES DO VETOR: [ %d ] ", soma);

    return 0;
}