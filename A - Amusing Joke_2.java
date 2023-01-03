import java.util.Arrays;
import java.util.Scanner;

public class Solving {
    private static final Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        String str3 = sc.nextLine();
        if ((str1 + str2).length() == str3.length()) {
            char[] str12Sorted = (str1 + str2).toCharArray();
            char[] str3Sorted = str3.toCharArray();
            Arrays.sort(str12Sorted);
            String str = String.copyValueOf(str12Sorted);
            Arrays.sort(str3Sorted);
            str3 = String.copyValueOf(str3Sorted);
            if (str.equals(str3)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        } else {
            System.out.println("NO");
        }
    }
}