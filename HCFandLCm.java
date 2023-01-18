import java.util.*;

public class HCFandLCm {
    public static void main(String[] argts) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two number :");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int s = 0;
        int LCM=0, HCF=0;
        if (num1 < num2) {
            s = num1;
        } else {
            s = num2;
        }

        for (int i = 1; i <= s; i++) {
            if (num1 % i == 0 && num2 % i == 0) {
                HCF = i;
            } 
        }
        System.out.println("HCF is : " + HCF);
        LCM = (num1 * num2) / HCF;
        System.out.println("LCM is : " + LCM);
    }
}
