import java.util.*;

public class insertele {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = { 1, 3, 5, 6, 7 };
        int len = arr.length;
        int[] newar = new int[len + 1];

        int index, value;
        System.out.println("Enter index : ");
        index = sc.nextInt();

        System.out.println("Enter value : ");
        value = sc.nextInt();

        System.out.println("Before insertion  " + Arrays.toString(arr));
        for (int i = 0, j = 0; i < newar.length; i++) {
            if (index != i) {
                newar[i] = arr[j];
                j++;
            } else {
                newar[i] = value;
            }
        }
        System.out.println("After insrtion : " + Arrays.toString(newar));
    }
}
