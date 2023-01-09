import java.util.Scanner;

public class Solving {

    private static final Scanner sc = new Scanner(System.in); 
		public static void main(String[] args) {
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] % 2 != arr[i + 1] % 2) {
                if (i - 1 >= 0) {
                    if (arr[i - 1] % 2 == arr[i] % 2) {
                        System.out.printf("%d%n",i + 2);
                    } else {
                        System.out.printf("%d%n",i + 1);
                    }
                    break;
                }
                if (i + 2 < n) {
                    if (arr[i + 1] % 2 != arr[i + 2] % 2) {
                        if (arr[i + 1] % 2 == arr[i + 2] % 2) {
                            System.out.printf("%d%n",i + 1);

                        } else {
                            System.out.printf("%d%n",i + 2);
                        }
                        break;
                    }
                }
                System.out.printf("%d%n",i + 1);
                break;
            }
        }
    }}