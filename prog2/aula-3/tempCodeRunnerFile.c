#include<stdio.h>
#include<windows.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");
    int i = 10;
    printf("%d", i++);
    return 0;
}