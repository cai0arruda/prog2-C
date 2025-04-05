/*A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%. Escreva um programa que leia o número de horas trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas).*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    const float jornada = 40;
    printf("Quantas horas foram trabalhadas na primeira semana? ");
    float hPrimeiraSemana;
    scanf("%f", &hPrimeiraSemana);
    float horasTotais;
    horasTotais = horasTotais + hPrimeiraSemana;
    float horaExtraTotal;
    horaExtraTotal = 0;
    if (hPrimeiraSemana > jornada)
        horaExtraTotal = horaExtraTotal + (hPrimeiraSemana - jornada);
    printf("Quantas horas foram trabalhadas na segunda semana? ");
    float hSegundaSemana;
    scanf("%f", &hSegundaSemana);
    horasTotais = horasTotais + hSegundaSemana;
    if (hSegundaSemana > jornada)
        horaExtraTotal = horaExtraTotal + (hSegundaSemana - jornada);
    printf("Quantas horas foram trabalhadas na terceira semana? ");
    float hTerceiraSemana;
    scanf("%f", &hTerceiraSemana);
    horasTotais = horasTotais + hTerceiraSemana;
    if (hTerceiraSemana > jornada)
        horaExtraTotal = horaExtraTotal + (hTerceiraSemana - jornada);
    printf("Quantas horas foram trabalhadas na terceira semana? ");
    float hQuartaSemana;
    scanf("%f", &hQuartaSemana);
    horasTotais = horasTotais + hQuartaSemana;
    if (hQuartaSemana > jornada)
        horaExtraTotal = horaExtraTotal + (hQuartaSemana - jornada);
    
    printf("HORAS EXTRAS - %.2f\n", horaExtraTotal);
    printf("HORAS TOTAIS - %.2f\n", horasTotais);

    printf("Qual o salário por hora? ");
    float salarioPorHora;
    scanf("%f", &salarioPorHora);

    float salarioTotal;
    float salarioHoraExtra;

    salarioTotal = horasTotais * salarioPorHora;
    salarioHoraExtra = (horaExtraTotal * salarioPorHora) * 1.5;

    printf("O salario total sem hora extra eh R$%2.f\n",salarioTotal);
    printf("Valor a receber pelas horas extras R$%2.f\n", salarioHoraExtra);

    float salario;
    salario = salarioTotal + salarioHoraExtra;

    printf("SALÁRIO TOTAL - R$%2.f\n", salario);

    return 0;
}