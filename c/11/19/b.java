
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class b {
    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        List<Integer> ylist = new LinkedList<>();
        for (int i = 1; i <= x; i++) {
            int y = gcd(x, i) + i;
            ylist.add(y);
        }
        int max = Collections.max(ylist);
        System.out.println(max);
    }
}
