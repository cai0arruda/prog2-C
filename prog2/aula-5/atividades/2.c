/*Declarar três vetores A, B e C de 10 elementos. Gerar números aleatórios para os vetores A e B. O vetor C deve receber a soma dos elementos do vetor A com o vetor B. Mostrar os três vetores*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
    srand(time(NULL));
    SetConsoleOutputCP(65001);
    system("cls");
    int vetorA[10], vetorB[10], vetorC[10];
    // Gerando os valores do vetor A e B
    for(int i = 0; i<10; i++){
        vetorA[i] = rand() % 100;
        vetorB[i] = rand() % 100;
    }

    for (int i = 0; i<10; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    // Mostrando os vetores na tela
    printf("Os valores do veotr A são: \n");
    for (int i = 0; i<10; i++){
        printf("%d ", vetorA[i]);
    }
    printf("\nOs valores do vetor B são: \n");
    for (int i = 0; i<10; i++){
        printf("%d ", vetorB[i]);
    }
    printf("\nOs valores do vetor C são: \n");
    for (int i = 0; i<10; i++){
        printf("%d ", vetorC[i]);
    }
    return 0;
}