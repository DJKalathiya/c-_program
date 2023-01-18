import java.util.*;

public class numbers {
    /*
     * public static void main(String[] args) {
     * int num = 232;
     * int temp = num;
     * int x, rev = 0;
     * while (num > 0) {
     * x = num % 10;
     * rev = rev*10 + x;
     * num = num / 10;
     * }
     * if (rev == temp) {
     * System.out.println("Palingdrome ");
     * } else {
     * System.out.println("IT is not palingdrome");
     * }
     * }
     */

    /*
     * public static void main(String[] args) {
     * int num = 145;
     * int temp = num;
     * int x, fact, sum = 0;
     * 
     * while (num > 0) {
     * x = num % 10;
     * fact = 1;
     * for (int i = 1; i <= x; i++) {
     * fact = fact * i;
     * }
     * sum = sum + fact;
     * num = num / 10;
     * }
     * 
     * if (temp == sum) {
     * System.out.println("strong number ");
     * } else {
     * System.out.println("Not strong number ");
     * }
     * }
     */

    public static void main(String[] args) {
        int num = 153;
        int temp;
        temp = num;
        int x, sum = 0;

        while (num > 0) {
            x = num % 10;
            sum = sum + (x * x * x);
            num = num / 10;
        }
        if (temp == sum) {
            System.out.println("This is armstrong");
        } else {
            System.out.println("This is not");
        }
    }
}
