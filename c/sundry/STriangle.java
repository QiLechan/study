
import java.util.Scanner;

public class STriangle {
    public static void main(String[] args) {
        double a, b, c, s;
        Scanner sc = new Scanner(System.in);
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        if (a + b > c && a + c > b && b + c > a) {
            s = (a + b + c) / 2;
            System.out.printf("%.2f", Math.sqrt(s * (s - a) * (s - b) * (s - c)));
        } else {
            System.out.println("Invalid Input");
        }
    }
}
