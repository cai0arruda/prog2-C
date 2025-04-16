#include<stdio.h>
#include<stdlib.h> // necessaria para funcao rand()
#include<windows.h>
#include<time.h> // necessaria para funcao time()
// srand(time(NULL)) - inicializa o gerador de numeros aleatorios com o tempo atual
int main(){
    srand(time(NULL)); // inicializa o gerador de numeros aleatorios - funcao rand com o time do PC
    SetConsoleOutputCP(65001);
    system("cls");
    int vetor[100];
    // Gerando 100 inteiros aleatorios entre 0 e 100
    for(int i = 0; i < 100; i++){
        vetor[i] = rand() % 100;
    }
    // Mostrando o vetor na tela
    printf("Os valores do vetor são: \n");
    for(int i = 0; i < 100; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}