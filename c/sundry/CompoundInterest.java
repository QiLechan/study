import java.util.Scanner;

public class CompoundInterest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();       
        double deposit = scanner.nextDouble(); 
        double annualRate = 0.0225;
        double totalAmount = deposit * Math.pow(1 + annualRate, n);
        System.out.printf("%.6f%n", totalAmount);
    }
}
