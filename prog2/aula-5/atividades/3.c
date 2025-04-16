/*Gere um vetor aleatoriamente com até 100 números. Depois conte quantos deles são pares, mostre o vetor e a quantidade de números pares encontrados*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
    srand(time(NULL));
    SetConsoleOutputCP(65001);
    system("cls");
    int vetor[10];
    int vetorPar[10];
    int quantPar;
    for(int i = 0; i<10; i++){
        vetor[i] = rand()%100;
    }
    quantPar = 0;
    for(int i = 0; i<10; i++){
        if (vetor[i] %2 == 0){
            vetorPar[quantPar] = vetor[i];
            quantPar++;
        }
        else{
            vetorPar[i] = 0;
        }
        
    }
    printf("vetor gerado aleatoriamente: \n");
    for(int i = 0; i<10; i++){
        printf("%d ",vetor[i]);
    }
    printf("\nNumeros pares dentro do vetor: %d",quantPar);
    printf("\nVetor somente com os numeros par:\n");
    for(int i = 0; i<quantPar; i++){
        printf("%d ",vetorPar[i]);
    }
}