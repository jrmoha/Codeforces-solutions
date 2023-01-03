import java.util.Arrays;
import java.util.Scanner;

public class Solving{

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n = sc.nextInt();
        int[] coins = new int[n];
        int sum = 0;
        int count = 0;
        int tmp = 0;
        for (int i = 0; i < n; i++) {
            coins[i] = sc.nextInt();
            sum += coins[i];
        }
        Arrays.sort(coins);
        for (int i = n - 1; i >= 0 && tmp <= sum / 2; i--) {
            tmp += coins[i];
            count++;
        }
        System.out.printf("%d", count);
    }
}