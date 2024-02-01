package BTest;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class No1NewCuresForInsomnia {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int size = scanner.nextInt();
        List<Integer> resultList = new ArrayList<>();

        for(int i = 0; i < size; i++){
            int number = scanner.nextInt();
            boolean[] usedNumberList = new boolean[10];
            boolean finish = true;
            int count = 0;
            int now = number;

            do{
                finish = true;
                count++;
                now = number * count;

                while (now != 0) {
                    usedNumberList[now % 10] = true;
                    now /= 10;
                };


                for(int j = 0; j < 10; j++){
                    if (!usedNumberList[j]) {
                        finish = false;
                        break;
                    }
                }
            }while (!finish);

            resultList.add(count * number);
        }

        for(int i = 0; i < size; i++){
            System.out.println("#" + (i+1) + " " + resultList.get(i));
        }
    }
}
