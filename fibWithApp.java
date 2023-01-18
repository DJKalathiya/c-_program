import java.util.Scanner;

public class fibWithApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;
        int a, b;
        int c=0;.

        a = 0;
        b = 1;
        System.out.println("Enter number to find fibonaci :");
        num = sc.nextInt();

        for (int i = 1; i <= num; i++) {
            System.out.print(c+ " ");
            a = b;
            b = c;
            c = a + b;
        }    
    }
}
