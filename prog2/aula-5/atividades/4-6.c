/*Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior é o menor elemento do vetor.*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int vetor[10];
    int maior;
    int pMaior;
    int menor;
    for(int i = 0; i<10;){
        printf("Digite o valor %d: ",i);
        scanf("%d", &vetor[i]);
        maior = vetor[i];
        pMaior = i;
        i++;
    }
    for(int i = 0; i<10; i++){
        printf("%d ",vetor[i]);
    }
    for(int i = 0; i<10; i++){
        if(maior<vetor[i]){
            maior = vetor[i];
            pMaior = i;
        }
        else{
            maior = maior;
        }
    }
    for (int i = 0; i<10; i++){
        if(menor>vetor[i]){
            menor = vetor[i];
        }
    }
    printf("\nMAIOR VALOR - %d - na posição %d", maior, pMaior);
    printf("\nMENOR VALOR - %d",menor);
}