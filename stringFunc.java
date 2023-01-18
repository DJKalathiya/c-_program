import java.sql.Date;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.util.Scanner;

public class stringFunc {
    public static void main(String [] args){
        /* System.out.println(Math.sin(2));
        System.out.println(Math.cbrt(27));
        System.out.println(Math.max(1,2));
        System.out.println(Math.round(3.9)); */
       /*  String s = "Easy";
        System.out.println(s.length()); */
        /* Scanner sc = new Scanner(System.in);
        String userName,password;
        System.out.print("Enter user name : ");
        userName = sc.next();
        System.out.print("Enter password : ");
        password = sc.next();

        if(userName.compareTo("Darshan_kalathiya")==0 && password.compareTo("DJKalathiya")==0){
            System.out.println("You are right person");
        }else{
            System.out.println("You are fraud");
        } */
        LocalDateTime date = LocalDateTime.now();
        System.out.println("Date : " +date);

    }
}
