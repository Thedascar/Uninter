package org.example.Aula;

import java.util.List;
import java.util.Scanner;

import static java.util.Arrays.asList;

public class Aula01 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Say your name: ");
        String res = s.nextLine();
        String upper = res.toUpperCase();
        MyName(upper);

        String[] a = new String[5];
        a[4] = " a";

        System.out.println( "  5º position : " + a[4] );
    }

    private static void MyName ( String name ) {
        System.out.printf( " Hy my name is %s , Again? , but it's a void function \n" , name);
        System.out.print( " <- New Line Tester is Working ;) \n" );
    }
}
