package java_baek;

import java.util.Scanner;

// 너무 쉬웠어요. 유치원 수준?
public class q2577 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] list = new int[10];
        int addUp = 1;

        for(int i = 0; i < 3; i++){
            addUp *= scanner.nextInt();
        }

        while (addUp != 0){
            list[addUp%10]++;
            addUp /= 10;
        }

        for(int i = 0; i < 10; i++){
            System.out.println(list[i]);
        }
    }
}
