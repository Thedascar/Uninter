package org.example.Aula;

import java.util.Scanner;

public class Exercicio01 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Digite sua peso: ");
        int peso = s.nextInt();

        System.out.println("Digite o seu altura: ");
        double altura = s.nextDouble();


        double imc = peso/(altura*2);
        System.out.printf("Seu imc é de: %.2f ",imc);

    }
}
