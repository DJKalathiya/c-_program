
import java.util.Scanner;

public class switch12 {
    public static void main(String[] args) {
        /*
         * String var = "Darshan";
         * 
         * switch (var) {
         * case "Djk": {
         * System.out.println("You are going to your home");
         * break;
         * }
         * case "Darshan": {
         * System.out.println("YOu are enjoy your life");
         * break;
         * }
         * case "Kalthiya": {
         * System.out.println("you are selected for job");
         * break;
         * }
         * default:
         * System.out.println("Sorry darling you not seleceted");
         * break;
         * }
         * System.out.println("Thank for use my code");
         */

        int age;
        System.out.print("Enter your age : ");
        try (Scanner sc = new Scanner(System.in)) {
            age = sc.nextInt();
        }
        if (age > 56) {
            System.out.println("You are experienced");
        } else if (age > 45) {
            System.out.println("You are semi experienced");
        } else if (age > 18) {
            System.out.println("YOu are Freasher ");
        } else {
            System.out.println("You are not readey for this ");
        }
        /* if (age > 2) {
            System.out.println("You are not baby");
        } */
    }
}
