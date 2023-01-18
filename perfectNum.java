import java.util.*;

public class perfectNum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Entr any number : ");
        int num = sc.nextInt();
        int sum = 0;

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum = sum + i;
            }
        }
        if (num == sum) {
            System.out.println("This number is perfect number");
        } else {
            System.out.println("THis number is not perfect number");
        }
    }
}
