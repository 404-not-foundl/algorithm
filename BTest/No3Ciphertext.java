package BTest;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class No3Ciphertext {
    static BufferedReader bufferedReader;

    public static void main(String[] args) throws IOException{
        bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        for(int i = 1; i <= 10; i++) {
            cipherText(i);
        }
    }

    private static void cipherText(int tc) throws IOException {
        LinkedList<Integer> list = new LinkedList<>();

        String[] read = bufferedReader.readLine().split(" ");
        int size = Integer.parseInt(read[0]);

        read = bufferedReader.readLine().split(" ");
        for(int i = 0; i < size; i++) {
            list.add(Integer.parseInt(read[i]));
        }

        read = bufferedReader.readLine().split(" ");
        size = Integer.parseInt(read[0]);
        for(int i = 0; i < size; i++) {
            switch (read[i]) {
                case "I" -> {
                    for (int j = i + 3 + Integer.parseInt(read[i] + 2) - 1; j >= i + 3; j--) {
                        list.add(Integer.parseInt(read[i + 1]), Integer.parseInt(read[j]));
                    }
                    i += 2 + Integer.parseInt(read[i + 2]);
                }
                case "D" -> {
                    for (int j = 0; j < Integer.parseInt(read[i + 2]); j++) {
                        list.remove(Integer.parseInt(read[i + 1]));
                    }
                    i += 2;
                }
                case "A" -> {
                    int temp = 0;
                    for (int j = list.size() - 1; j >= 0; j--) {
                        list.set(j, Integer.parseInt(read[i + 2 + temp]));
                        temp++;
                    }
                    i += 1 + Integer.parseInt(read[i + 1]);
                }
            }
        }

        System.out.print("#" + tc);
        for(Integer num : list) {
            System.out.print(" " + num);
        }
        System.out.println();
    }
}
