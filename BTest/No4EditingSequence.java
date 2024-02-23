package BTest;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class No4EditingSequence {
    static BufferedReader bufferedReader;

    public static void main(String[] args) throws IOException {
        bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String[] read = bufferedReader.readLine().split(" ");
        int TC = Integer.parseInt(read[0]);

        for (int i = 1; i <= TC; i++) {
            editingSequence(i);
        }
    }

    private static void editingSequence(int tc) throws IOException {
        LinkedList<Integer> list = new LinkedList<>();

        String[] read = bufferedReader.readLine().split(" ");

        int size = Integer.parseInt(read[0]);
        int order = Integer.parseInt(read[1]);
        int pull = Integer.parseInt(read[2]);

        read = bufferedReader.readLine().split(" ");
        for(int i = 0; i < size; i++) {
            list.add(Integer.parseInt(read[i]));
        }

        for(int i = 0; i < order; i++) {
            read = bufferedReader.readLine().split(" ");
            if (read[0].equals("I")){
                list.add(Integer.parseInt(read[1]), Integer.parseInt(read[2]));
            } else if (read[0].equals("D")) {
                list.remove(Integer.parseInt(read[1]));
            } else if (read[0].equals("C")) {
                list.set(Integer.parseInt(read[1]), Integer.parseInt(read[2]));
            }
        }

        System.out.print("#" + tc + " ");
        if (list.size() < pull + 1) {
            System.out.print(-1);
        }else{
            System.out.print(list.get(pull));
        }
        System.out.println();
    }
}
