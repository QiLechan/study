import java.util.Scanner;

public class c {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String x = sc.next();
        if (Integer.parseInt(x) == 100){
            System.out.println("Hai");
            return;
        }
        char ch1 = x.charAt(0);
        char ch2 = x.charAt(1);
        char ch3 = x.charAt(2);
        int m = Character.getNumericValue(ch1);
        int n = Character.getNumericValue(ch2);
        int y = Character.getNumericValue(ch3);
        if (y == 0){
            System.out.println("chi ga u");
        }
        else if(n == 0 && m == 1){
            System.out.println("Hai");
        }
        else{
            System.out.println("chi ga u");
        }
    }
}
