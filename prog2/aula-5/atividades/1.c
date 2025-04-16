/*Criar um vetor A com 5 elementos, carregar ele com números aleatórios. Declarar um vetor B. Copiar todos os elementos do Vetor A para o Vetor B e mostrar os dois na tela;*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
    srand(time(NULL));
    SetConsoleOutputCP(65001);
    system("cls");
    int vetorA[5];
    int vetorB[5];
    for (int i = 0; i<5; i++){
        vetorA[i] = rand() % 100;
    }
    // Copiando os elementos do vetor A para o vetor B
    for (int i = 0; i<5; i++){
        vetorB[i] = vetorA[i];
    }
    // Mostrando os vetores na tela
    printf("Os valores do vetor A são: \n");
    for (int i = 0; i<5; i++){
        printf("%d ", vetorA[i]);
    }
    printf("\nOs valores do vetor B são: \n");
    for (int i = 0; i<5; i++){
        printf("%d ", vetorB[i]);
    }
    printf("\n");
    return 0;
}