package BTest;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class No2BinaryRepresentation {
    static BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int TC = Integer.parseInt(bufferedReader.readLine());
        for(int i = 0; i < TC; i++){
            binaryConversion(i+1);
        }
        bufferedReader.close();
    }

    public static void binaryConversion(int TC) throws IOException {
        String[] numbers = bufferedReader.readLine().split(" ");
        // receiving num
        int N = Integer.parseInt(numbers[0]);
        int M = Integer.parseInt(numbers[1]);

        // bitmask를 사용하여 마지막 N 비트가 모두 1인지 확인
        int bitmask = (1 << N) - 1;
        boolean result = (M & bitmask) == bitmask;

        // result 출력
        System.out.print("#" + TC + " ");
        if(result) System.out.println("ON");
        else System.out.println("OFF");
    }
}
