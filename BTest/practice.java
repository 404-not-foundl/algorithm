package BTest;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class practice {

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("First Input::");
        String[] read = bufferedReader.readLine().split(" ");
        System.out.println("First size : " + read.length);
        for(String number : read) {
            System.out.print(number + " ");
        }
        System.out.println();

        System.out.println("-------------------------------");

        System.out.println("Second Input::");
        read = bufferedReader.readLine().split(" ");
        System.out.println("Second size : " + read.length);
        for(String number : read) {
            System.out.print(number + " ");
        }
        System.out.println();
    }
}
