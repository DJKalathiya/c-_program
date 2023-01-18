
import java.util.Scanner;

public class practiceSwitchIfElse {
    public static void main(String[] args) {
        /*
         * byte m1, m2, m3;
         * Scanner sc = new Scanner(System.in);
         * System.out.print("ENter your marks in phy : ");
         * m1 = sc.nextByte();
         * 
         * System.out.print("ENter your marks in chem : ");
         * m2 = sc.nextByte();
         * 
         * System.out.print("ENter your marks in maths : ");
         * m3 = sc.nextByte();
         * 
         * float avg = (m1 + m2 + m3) / 3.0f;
         * System.out.println("Your overall percentaage is : " + avg);
         * 
         * if (avg >= 40 && m1 >= 33 && m2 >= 33 && m3 >= 33) {
         * System.out.
         * println("Congratulation you are pass now you are ready for marrage");
         * } else {
         * System.out.
         * println("Sorry dear you are not pass in this exam but you can try one more time"
         * );
         * }
         */

        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your income in lakhs : ");
            float tax = 0;
            float income = sc.nextFloat();

            if (income <= 2.5f) {
                tax = tax + 0;
            } else if (income > 2.5f && income <= 5.0f) {
                tax = tax + 0.05f * (income - 2.5f);
            } else if (income > 5f && income <= 10.0f) {
                tax = tax + 0.05f * (5f - 2.5f);
                tax = tax + 0.2f * (income - 5f);
            } else if (income > 10.0f) {
                tax = tax + 0.05f * (5f - 2.5f);
                tax = tax + 0.2f * (10.0f - 5f);
                tax = tax + 0.3f * (income - 10.0f);
            }
            System.out.println("The total tax paid by the employee is : " + tax);
        }
    }
}
