import java.util.Scanner;
import java.util.Arrays;

public class Solving {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n = sc.nextInt();
        int l = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        double r = 2 * Math.max(a[0], l - a[a.length - 1]);
        for (int i = 0; i < a.length - 1; i++) {
            r = Math.max(r,(double)a[i + 1] - a[i]);
        }
        System.out.printf("%1.10f%n", r / 2.);
    }
}