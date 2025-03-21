#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int numero;
    // Lendo um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("O número digitado foi %d\n", numero);
    // Lendo um número real
    float numeroReal;
    printf("Digite um número real: ");
    scanf("%f", &numeroReal);
    printf("O número real digitado foi %.2f\n", numeroReal);
    // Apagando o buffer do teclado (necessário para remover o enter que ficou armazenado
    setbuf(stdin, NULL);
    // Lendo uma letra
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    printf("A letra digitada foi %c\n", letra);
    // Lendo hora e minuto
    int hora, minuto;
    printf("Digite a hora e o minuto: ");
    scanf("%d %d", &hora, &minuto);
    printf("A hora digitada foi %d:%d\n", hora, minuto);
    // Lendo uma letra
    setbuf(stdin, NULL);
    printf("Digite uma letra: ");
    letra = getchar();
    printf("A letra digitada foi %c\n", letra);
    system("pause");
    return 0;
}