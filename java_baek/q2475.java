package java_baek;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class q2475 {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String[] numbers = bufferedReader.readLine().split(" ");
        int result = 0;

        for (int i = 0; i < 5; i++){
            result += Integer.parseInt(numbers[i]) * Integer.parseInt(numbers[i]);
        }

        System.out.println(result % 10);
    }
}
