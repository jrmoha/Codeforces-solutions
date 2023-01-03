import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words;
        int length = sc.nextInt();
        words = new String[length];
        for (int i = 0; i < length; i++) {
            words[i] = sc.next();
        }
        for (int j = 0; j < length; j++) {
            if (words[j].length() > 10) {
                System.out.print(words[j].charAt(0));
                System.out.print(words[j].length() - 2);
                System.out.print(words[j].charAt(words[j].length() - 1));
                System.out.println("");
            } else {
                System.out.println(words[j]);
            }
        }
    }
}