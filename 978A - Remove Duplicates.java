import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Solving {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Map<Integer, Integer> map = new LinkedHashMap<>();
        for (int i = n - 1; i >= 0; i--) {
            map.putIfAbsent(a[i], i);
        }
        List<Integer> lst = new ArrayList<>(map.keySet());
        Collections.reverse(lst);
        System.out.printf("%d%n", map.size());
        lst.forEach((x) -> {
            System.out.printf("%d ", x);
        });
    }
}