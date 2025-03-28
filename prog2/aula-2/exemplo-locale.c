#include <stdio.h>
#include <windows.h>
// Biblioteca para usar locale
#include <locale.h>
int main(){
    SetConsoleOutputCP(65001);
    // Configurando para que todas as opções regionais sejam usadas, com as "", faz com que o comnpilador pergunte ao SO qual a localização definida
    setlocale(LC_ALL, "");
    float valor = 12.45;
    printf("O valor é %.2f\n", valor);
    return 0;
}