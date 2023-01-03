import java.util.Scanner;
import java.util.Arrays;

public class JavaApplication89 {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
       int num = sc.nextInt();
        int[] arr = new int[num];
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        int[] count = new int[3];
        int[][] id = new int[3][num];
        for (int i = 0; i < arr.length; i++) {
            count[arr[i] - 1]++;
            id[arr[i] - 1][count[arr[i]-1] - 1] = i + 1;
        }
        int teams = Arrays.stream(count).min().getAsInt();
        System.out.println(teams);
        for(int i=0;i<teams;i++){
            System.out.printf("%d %d %d%n",id[0][i],id[1][i],id[2][i]);
        }
    }
}