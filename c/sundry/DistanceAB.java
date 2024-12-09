
import java.util.Scanner;

public class DistanceAB {
    public static void main(String[] args) {
        double x1, x2, y1, y2, distance;
        Scanner sc = new Scanner(System.in);
        x1 = sc.nextDouble();
        y1 = sc.nextDouble();
        x2 = sc.nextDouble();
        y2 = sc.nextDouble();
        if (0 <= x1 && x2 <= 100 && y1 <= 100 && y2 <= 100) {
            distance = Math.sqrt(Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2));
            System.out.printf("%.2f", distance);
        } else {
            System.out.println("Invalid Input");
        }
        sc.close();
    }
}