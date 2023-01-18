import java.util.Scanner;

public class variable1 {
    public static void main(String [] args){
        int Rollnum;
        float marks;
        String Name;
        Scanner obj = new Scanner(System.in);

        System.out.print("Enter name : " );
        Name = obj.nextLine();

        System.out.print("Enter roll number : ");
        Rollnum = obj.nextInt();

        System.out.print("Enter marks : ");
        marks = obj.nextFloat();

        System.out.println("Your name is : " + Name);
        System.out.println("Your Roll number is : " + Rollnum);
        System.out.println("Your Marks is : " + marks);

    }
}
