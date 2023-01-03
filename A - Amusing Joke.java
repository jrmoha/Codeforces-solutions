import java.util.Scanner;

public class Solving{

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        String str3 = sc.nextLine();
        if ((str1.concat(str2)).length() == str3.length()) {
            for (int i = 1; i <= str1.length(); i++) {
                CharSequence tmp = str1.subSequence(i - 1, i);
                if (str3.contains(tmp)) {
                    str3 = str3.replaceFirst(tmp.toString(), "_");
                }
            }
            str3 = str3.replaceAll("_", "");
            for (int i = 1; i <= str2.length(); i++) {
                CharSequence tmp = str2.subSequence(i - 1, i);
                if (str3.contains(tmp)) {
                    str3 = str3.replaceFirst(tmp.toString(), "_");
                }
            }
            str3 = str3.replaceAll("_", "");
            if (str3.length() == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        } else {
            System.out.println("NO");
        }
    }
}