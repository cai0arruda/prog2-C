#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    //for(inicialização; condição; passo)
    int cont;
    for(cont=0;cont<=10;cont++)
        printf("%d ",cont);
    return 0;
}