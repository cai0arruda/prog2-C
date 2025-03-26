#include<stdio.h>;
#include<string.h>;
#include<windows.h>;

#define TAM 100

typedef struct{
    char nome[TAM];
    int idade;
    float nota;
} Aluno;

Aluno alunos[TAM];
int qtdAlunos = 0;

void cadastrarAluno(){
    if (qtdAlunos >= TAM){
        printf("Não é possível cadastrar mais alunos\n");
        return;
    }
    system("cls");
    printf("\nCADASTRO DE ALUNO\n");
    printf("Nome: ");
    scanf(" %[^\n]", alunos[qtdAlunos].nome);
    printf("Idade: ");
    scanf("%d", &alunos[qtdAlunos].idade);
    printf("Nota: ");
    scanf("%f", &alunos[qtdAlunos].nota);

    if (alunos[qtdAlunos].nota < 0 || alunos[qtdAlunos].nota > 10){
        printf("ERRO - Nota inválida! Deve estar entre 0 e 10\n");
        setbuf(stdin, NULL);
        printf("\nPressione ENTER para continuar...");
        getchar();
        return;
    }

    qtdAlunos++;
    printf("Aluno cadastrado com sucesso!\n");
    setbuf(stdin, NULL);
    printf("\nPressione ENTER para continuar...");
    getchar();
}

void buscarAluno(){
    system("cls");
    char nomeBusca[50];
    printf("Digite o nome do aluno que deseja buscar: ");
    scanf(" %[^\n]", nomeBusca);

    for (int i = 0; i < qtdAlunos; i++){
        if (strcmp(nomeBusca, alunos[i].nome) == 0){
            printf("\nALUNO ENCONTRADO\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
            setbuf(stdin, NULL);
            printf("\nPressione ENTER para continuar...");
            getchar();
            return;
        }
    }

    printf("Aluno não encontrado\n");
    setbuf(stdin, NULL);
    printf("\nPressione ENTER para continuar...");
    getchar();
}

void listarAlunos(){
    system("cls");
    if (qtdAlunos == 0){
        printf("Não há alunos cadastrados\n");
        setbuf(stdin, NULL);
        printf("\nPressione ENTER para continuar...");
        getchar();
        return;
    }
    printf("\nLISTA DE ALUNOS\n");
    for (int i = 0; i < qtdAlunos; i++){
        printf("%d - Nome: %s | Idade: %d | Nota: %.2f\n", i+1, alunos[i].nome, alunos[i].idade, alunos[i].nota);
    }

    setbuf(stdin, NULL);
    printf("\nPressione ENTER para continuar...");
    getchar();
}

int main(){
    SetConsoleOutputCP(65001);
    int opcao;
    do {
        system("cls");
        printf("\n------ MENU ------\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Buscar aluno\n");
        printf("3 - Listar alunos\n");
        printf("4 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                buscarAluno();
                break;
            case 3:
                listarAlunos();
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                system("cls");
                printf("Opção inválida! Tente novamente.\n");
                setbuf(stdin, NULL);
                printf("\nPressione ENTER para continuar...");
                getchar();
                break;
        }
    } while (opcao != 4);

    return 0;
}