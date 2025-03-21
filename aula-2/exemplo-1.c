#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    //\n => quebra de linha
    //\t => tabulação (espaço desde a margem)
    //\r => retorno
    printf("Estou escrevendo na tela em C\n");
    // int numerointeiro
    // int numero_inteiro
    // Crias uma variavel inteira
    int numeroInteiro = 12;
    // Imprimir na tela
    printf("O valor da variavel inteira eh: %d\n", numeroInteiro);
    // %d => inteiro
    // Variavel Real
    // É possivel associar um float a um double
    // double n;
    // float t;
    // n = t;
    // Porém não é possivel associar um double a um float, ja que o double ocupa o dobro de memória
    float numeroReal = 12.5;
    double numeroDouble = 10.5;
    printf("O valor do numero float é %f, que limitando numero de casa decimais fica %.2f. O numero double vale %f\n", numeroReal, numeroReal, numeroDouble);
    // %f => float
    // %.2f => float com 2 casas decimais
    // o tipo char pode armaenar caracteres
    char letra = 'a';
    char valor = 9;
    printf("A letra vale %c e o valor vale %c. Tambem e possivel imprimir o valor ASCII, por exemplo o 'a' e 97 %c\n",letra, valor, 97);
    // %c => char
    // Usando função putchar
    putchar('a');
    putchar('\n');
    putchar(98);
    putchar('\n');
    // O endereço de memória de uma variável pode ser obtido com o operador &
    printf("O endereço de memória da variável número inteiro é %p", &numeroInteiro);
    return 0;
}