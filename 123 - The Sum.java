import java.util.Scanner;

public class Solving{

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int k = sc.nextInt();
        long sum = 1;
        int[] fib = new int[k + 1];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= k; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
            sum += fib[i];
        }
        System.out.printf("%d", sum);
    }
}