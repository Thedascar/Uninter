package org.example.Aula;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

public class a {

    public static void main(String[] args) {
        StringBuilder nome = new StringBuilder("Lucas Ramon");
        System.out.println(nome.reverse());

        List<Integer> numeros = new ArrayList<>(List.of(1, 2, 3, 4, 5, -4,6,-8, 7, 8, 9, 10));

        Collections.reverse(numeros);
        System.out.println(numeros);


    }
}
