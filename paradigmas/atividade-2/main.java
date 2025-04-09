abstract class Pessoa {
    // Método abstrato que deve ser implementado pelas subclasses
    abstract void dizerAlgo(String algo);

    // Métodos concretos que podem ser utilizados pelas subclasses
    int multiplicar(int a, int b) {
        return a * b;
    }

    int somar(int a, int b) {
        return a + b;
    }

    int subtrair(int a, int b) {
        return a - b;
    }

    double dividir(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            throw new ArithmeticException("Divisão por zero não é permitida.");
        }
    }

    int calcularRestoDeDivisao(int a, int b) {
        return a % b;
    }
}

class Aluno extends Pessoa {
    private String nome;
    private int idade;

    // Construtor da classe Aluno
    public Aluno(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    // Implementação do método abstrato
    @Override
    void dizerAlgo(String algo) {
        System.out.println("Nome: " + nome);
        System.out.println("Idade: " + idade);
        System.out.println("Mensagem: " + algo);
    }
}

// Classe principal para testar a implementação

public class Main {
    public static void main(String[] args) {
        // Criando um objeto da classe Aluno
        Aluno aluno = new Aluno("Caio Arruda", 20);

        // Chamando o método dizerAlgo
        aluno.dizerAlgo("Sou estudante de Sistemas de Informação.");

        // Chamando os métodos de cálculo
        System.out.println("Multiplicação: " + aluno.multiplicar(5, 3));
        System.out.println("Soma: " + aluno.somar(5, 3));
        System.out.println("Subtração: " + aluno.subtrair(5, 3));
        System.out.println("Divisão: " + aluno.dividir(5, 3));
        System.out.println("Resto da divisão: " + aluno.calcularRestoDeDivisao(5, 2));
    }
}