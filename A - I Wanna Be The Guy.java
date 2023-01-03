import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Solving{

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n = sc.nextInt();
        int p = sc.nextInt();
        Set<Integer> set = new HashSet<>();
        int[] X = new int[p];
        for (int i = 0; i < p; i++) {
            X[i] = sc.nextInt();
            set.add(X[i]);
        }
        int q = sc.nextInt();
        int[] Y = new int[q];
        for (int i = 0; i < q; i++) {
            Y[i] = sc.nextInt();
            set.add(Y[i]);
        }
        if (set.size() == n) {
            System.out.println("I become the guy.");
        } else {
            System.out.println("Oh, my keyboard!");
        }
    }
}