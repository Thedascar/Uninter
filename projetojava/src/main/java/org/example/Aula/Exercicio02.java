package org.example.Aula;

import java.util.Scanner;

public class Exercicio02 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

       int valorExato = 10000;
       int soldados = 0;


       while (soldados != valorExato){

           System.out.println("Quantos soldados vamos enfrentar: ");
           soldados = s.nextInt();

           if(soldados > 10000 ){
               System.out.println("Não, é menos dãa kkk");

           } else if (soldados < 10000) {
               System.out.println("Não e tão fácil assim");


           }else {
               System.out.println("É isso mesmo são 10000 te vira negão !!!!!!!!");

           }

       }


    }
}
