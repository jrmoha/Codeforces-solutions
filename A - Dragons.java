import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Scanner;

public class Solving{

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int s = sc.nextInt();
        int n = sc.nextInt();
        Queue<Integer[]> queue = new PriorityQueue<>((t1, t2) -> {
            return t1[0] - t2[0];
        });
        for (int i = 0; i < n; i++) {
            queue.add(new Integer[]{sc.nextInt(), sc.nextInt()});
        }
        while (!queue.isEmpty()) {
            Integer[] tmp = queue.remove();
            if (s > tmp[0]) {
                s += tmp[1];
            } else {
                queue.add(tmp);
                break;
            }
        }
        if (queue.isEmpty()) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}