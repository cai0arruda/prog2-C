#include<stdio.h>
#include<stdlib.h> // necessaria para funcao rand()
#include<windows.h>
#include<time.h> // necessaria para funcao time()
// srand(time(NULL)) - inicializa o gerador de numeros aleatorios com o tempo atual
int main(){
    srand(time(NULL)); // inicializa o gerador de numeros aleatorios - funcao rand com o time do PC
    SetConsoleOutputCP(65001);
    system("cls");
    // Gerando um inteiro aleatorio entre 0 e 100
    int aleatorio = rand() % 100;
    printf("O número aleatório gerado foi: %d\n", aleatorio);
    return 0;
}