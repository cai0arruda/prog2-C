/*Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int dia, mes, dias_passados;
    printf("Digite o dia e o mês (dd/mm): ");
    scanf("%d/%d", &dia, &mes);
    dias_passados = (mes - 1) * 30 + dia;
    printf("Desde o início do ano, se passaram %d dias", dias_passados);
    return 0;
}