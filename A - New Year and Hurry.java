import java.util.Scanner;
public class Solving{
private static final Scanner sc=new Scanner(System.in);
public static void main(String[] args) {
        int n = sc.nextInt();
        int k = sc.nextInt();
        int i = 1, problems = 0, remaining_time = (4 * 60) - k;
        while (remaining_time - (i * 5) >=0 && problems < n) {
            remaining_time -= (i++ * 5);
            problems++;
            if(remaining_time - (i * 5)<0)
                break;
        }
        System.out.printf("%d%n",problems);
    }
}