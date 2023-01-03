import java.util.Arrays;
import java.util.PriorityQueue;
import java.util.Scanner;

public class Solving{

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] puzz = new int[m];
        PriorityQueue<Integer> diff = new PriorityQueue<>();
        for (int i = 0; i < m; i++) {
            puzz[i] = sc.nextInt();
        }
        Arrays.sort(puzz);
        for (int i = 0; i < m; i++) {
            if (i + (n - 1) < m) {
                diff.add(puzz[i + n-1] - puzz[i]);
            } else {
                break;
            }
        }
        System.out.printf("%d", diff.remove());
    }
}