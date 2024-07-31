package BTest;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class No3Ciphertext {
    static BufferedReader bufferedReader;

    public static void main(String[] args) throws IOException {
        bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        for (int i = 1; i <= 10; i++) {
            cipherText(i);
        }
    }

    private static void cipherText(int tc) throws IOException {
        LinkedList<Integer> list = new LinkedList<>();

        String[] read = bufferedReader.readLine().split(" ");
        int size = Integer.parseInt(read[0]);

        read = bufferedReader.readLine().split(" ");
        for (int i = 0; i < size; i++) {
            list.add(Integer.parseInt(read[i]));
        }

        read = bufferedReader.readLine().split(" ");
        size = Integer.parseInt(read[0]);
        for (int i = 0; i < size; ) {
            switch (read[i]) {
                case "I":
                    int position = Integer.parseInt(read[i + 1]);
                    int numToInsert = Integer.parseInt(read[i + 2]);
                    for (int j = i + 3 + numToInsert - 1; j >= i + 3; j--) {
                        list.add(position, Integer.parseInt(read[j]));
                    }
                    i += 3 + numToInsert;
                    break;
                case "D":
                    int startPosition = Integer.parseInt(read[i + 1]);
                    int numToDelete = Integer.parseInt(read[i + 2]);
                    for (int j = 0; j < numToDelete; j++) {
                        if (startPosition < list.size()) {
                            list.remove(startPosition);
                        }
                    }
                    i += 3;
                    break;
                case "A":
                    int numToAdd = Integer.parseInt(read[i + 1]);
                    for (int j = 0; j < numToAdd; j++) {
                        list.add(Integer.parseInt(read[i + 2 + j]));
                    }
                    i += 2 + numToAdd;
                    break;
            }
        }

        System.out.print("#" + tc);
        for (int j = 0; j < 10 && j < list.size(); j++) {
            System.out.print(" " + list.get(j));
        }
        System.out.println();
    }
}
