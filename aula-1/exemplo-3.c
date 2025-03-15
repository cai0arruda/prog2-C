#include<stdio.h>

int main(){
    //impressao de variavel inteira
    int numero = 10;
    printf("O valor do numero e %d\n",numero);

    //impressao de variavel real
    float altura = 1.8;
    double valor = 4.678534;
    printf("A variavel altura vale %.1f e a variavel valor vale %.3f\n",altura,valor);

    //impressao de tipo char
    char letra = 'C';
    printf("A letra eh %c\n",letra);

    return 0;
}