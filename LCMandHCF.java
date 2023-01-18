import java.util.Scanner;

import java.util.*;

public class LCMandHCF {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("ENter two number : ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int LCM = 0, HCF = 0, g = 0;

        if (num1 > num2) {
            g = num1;
        } else {
            g = num2;
        }
        for (int i = g; i <= (num1 * num2); i++) {
            if (i%num1 == 0 && i%num2 == 0) {
                LCM = i;
                break;
            }
        }
        System.out.println("LCM is :" + LCM);
        HCF = (num1 * num2) / LCM;
        System.out.println("HCF is : " + HCF);

    }
}
