package pkgnew;

/**
 *
 * @author Mostafa
 */
import java.util.Scanner;

public class Solving {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int t = sc.nextInt();
        int[] a = new int[t];
        for (int i = 0; i < t; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < t; i++) {
            int count = 0;
            for (int j = 1; j <= a[i];) {
                double exp = Math.pow(10, Math.floor(Math.log10(j)));
                if (j % exp == 0) {
                    count++;
                }
                j += exp;
            }
            System.out.printf("%d%n", count);
        }
    }
}
