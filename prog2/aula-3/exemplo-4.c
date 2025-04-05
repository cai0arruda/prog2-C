#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int n = 1;
    int d = 2;
    float r;
    r = (float)n/d;
    printf("A o resultado da divisão entre 1 e 2 é igual a %.2f", r);
    return 0;
}