import java.util.*;

public class vowelUSeSwitch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any single charcter : ");
        char char1 = sc.next().charAt(0);

        switch (char1) {
            case 'a':
            case 'i':
            case 'o':
            case 'u':
            case 'e':
                System.out.println("Character is vowel  ");
                break;
            default:
                System.out.println("Character is consnant ");
                break;
        }
    }
}
