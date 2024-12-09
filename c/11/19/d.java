import java.util.Scanner;

public class d {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        scanner.close();
        
        if (isImportantNumber(x)) {
            System.out.println("Hai");
        } else {
            System.out.println("chi ga u");
        }
    }

    public static boolean isImportantNumber(int x) {
        String xStr = String.valueOf(x);
        if (xStr.charAt(0) == '1') {
            for (int i = 1; i < xStr.length(); i++) {
                if (xStr.charAt(i) != '0') {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
}