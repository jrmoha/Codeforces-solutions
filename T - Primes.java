/**
 *
 * @author Mostafa
 */
import java.util.Scanner;
import java.util.Vector;

public class Solving {

    static int size = 1000001;
    static boolean[] isprime = new boolean[size];
    static Vector<Integer> prime = new Vector<>();
    private static final Scanner sc = new Scanner(System.in);

    static void seive() {
        for (int i = 2; i < size; i++) {
            isprime[i] = true;
        }
        for (int i = 2; i < size; i++) {
            if (isprime[i]) {
                prime.add(i);
            }
            for (int j = 0; j < prime.size() && i * prime.get(j) < size; j++) {
                isprime[i * prime.get(j)] = false;
            }
        }
    }

    public static void main(String[] args) {
        seive();
        int n = sc.nextInt();
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
            double tmp1 = Math.sqrt(a[i]);
            long tmp2 = (long) Math.sqrt(a[i]);
            if (isprime[(int) tmp2] && tmp1 == tmp2) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
