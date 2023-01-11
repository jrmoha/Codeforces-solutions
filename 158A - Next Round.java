import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Random;
import java.util.Scanner;
import java.math.BigInteger;
import java.util.Collections;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.Set;
import java.util.Vector;
import java.util.regex.Pattern;
 
public class Solving {
 
    private static final Scanner sc = new Scanner(System.in);
public static void main(String[] args) {
        int n, k;
        n = sc.nextInt();
        k = sc.nextInt();
        int[] arr = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] > 0 && arr[i] >= arr[k - 1]) {
                sum++;
            }
        }
        System.out.printf("%d%n", sum);
    }}