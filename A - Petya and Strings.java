import java.util.Scanner;
 
public class Solving {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String first = sc.next();
        first = first.toLowerCase();
        String sec = sc.next();
        sec = sec.toLowerCase();
        int res=first.compareTo(sec);
        if(res>0)
            System.out.println("1");
        else
            if(res<0)
                System.out.println("-1");
        else
            if(res==0)
                System.out.println("0");
    }
 
}