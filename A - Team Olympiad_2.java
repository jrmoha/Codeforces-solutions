import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Solving{

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int num = sc.nextInt();
        int[] students = new int[num];
        ArrayList<Integer[]> arr = new ArrayList<>();
        int numOfteams = 0;
        for (int i = 0; i < num; i++) {
            students[i] = sc.nextInt();
        }
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < num; i++) {
            map.clear();
            if (students[i] != 0) {
                map.putIfAbsent(students[i], i + 1);
                students[i] = 0;
                for (int j = i + 1; j < num; j++) {
                    if (!map.containsKey(students[j]) && students[j] != 0) {
                        map.put(students[j], j + 1);
                        students[j] = 0;
                    }
                }
            }
            if (map.size() == 3) {
                Integer[] temp = new Integer[3];
                int k = 0;
                for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
                    temp[k++] = entry.getValue();
                }
                numOfteams++;
                arr.add(temp);
            }
        }
        if (numOfteams > 0) {
            System.out.println(numOfteams);
            for (Integer[] ar : arr) {
                for (int i = 0; i < ar.length; i++) {
                    System.out.printf("%d ", ar[i]);
                }
                System.out.println("");
            }
        } else {
            System.out.println(0);
        }
    }
}