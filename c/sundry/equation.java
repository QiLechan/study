
import java.util.Scanner;

public class equation {
    public static void main(String[] args) {
        double a, b, c;
        Scanner sc = new Scanner(System.in);
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        double d = b * b - 4 * a * c;
        double x1 = (-b + Math.sqrt(d)) / (2 * a);
        double x2 = (-b - Math.sqrt(d)) / (2 * a);
        System.out.printf("%7.2f%7.2f", x1, x2);
    }
}
