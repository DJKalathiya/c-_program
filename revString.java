import java.util.Scanner;

public class revString {
    public static  void main(String [] args){
        Scanner sc = new Scanner(System.in);
        String str;
        System.out.println("Enter any string : ");
        str = sc.nextLine();

        for(int i=str.length()-1; i>=0; i--){
            System.out.print(str.charAt(i));
        }
    }
}
