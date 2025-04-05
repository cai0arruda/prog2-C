#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int nota;
    do{
        printf("Digite uma nota entre 1 e 10: ");
        scanf("%d", &nota);
    }
    while(nota<1 || nota>10);
    printf("A nota é %d\n",nota);
    return 0;
}