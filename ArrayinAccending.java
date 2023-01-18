import java.util.*;

public class ArrayinAccending {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("ENter size of an array :");
        int size = sc.nextInt();
        int[] ar = new int[size];
        int length = ar.length;

        for (int i = 0; i < length; i++) {
            System.out.print("Enter array element " + (i + 1) + " : ");
            ar[i] = sc.nextInt();
        }
        System.out.println("before :");
        for (int e : ar) {
            System.out.print(e + " ");
        }

        System.out.println("\nAfter:");
        for (int i = 0; i < ar.length; i++) {
            for (int j = i + 1; j < ar.length; j++) {
                if (ar[i] > ar[j]) {
                    int temp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }
        for (int e : ar) {
            System.out.print(e + " ");
        }
    }
}