/*Declare três vetores com até 100 números, o primeiro deve receber números aleatórios, o segundo deve receber os números pares do primeiro vetor e o segundo os números ímpares do primeiro vetor. Ao final mostrar os três vetores
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
    srand(time(NULL));
    SetConsoleOutputCP(65001);
    system("cls");
    int vetor[100];
    int vetorPar[100];
    int vetorImpar[100];
    int contPar = 0;
    int contImpar = 0;
    printf("Dados no vetor\n");
    for(int i=0; i<100; i++){
        vetor[i] = rand()%200;
        printf("%d ", vetor[i]);
        if(vetor[i]%2==0){
            vetorPar[contPar] = vetor[i];
            contPar++;
        }
        else{
            vetorImpar[contImpar] = vetor[i];
            contImpar++;
        }
    }
    printf("\n São pares os valores: \n");
    for (int i=0; i < contPar; i++){
        printf("%d ", vetorPar[i]);
    }

    printf("\n São impares os valores: \n");
    for (int i=0; i < contImpar; i++){
        printf("%d ", vetorImpar[i]);
    }

    return 0;
}