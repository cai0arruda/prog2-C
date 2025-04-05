#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    //Precisa de um contador
    int cont = 1;
    while(cont<10){
        printf("[ %d ]\n", cont);
        cont++;
    }
    printf("Valor final de CONT após o looping: %d", cont);
    return 0;
}