import java.util.Scanner;

public class exception {
    public static void main(String [] args){
        /* Scanner sc = new Scanner(System.in);
        int a,b,c;
        try{
            System.out.print("Enter a : ");
            a = sc.nextInt();

            System.out.print("Enter b : ");
            b = sc.nextInt();
            c = a/b;
            System.out.println("Div = " + c);
        }catch(Exception e ){
            System.out.println("Error : " +e);
        } */
        Scanner sc = new Scanner(System.in);
        int a,b,c=0;
        try{
            System.out.print("Enter a : ");
            a = sc.nextInt();

            System.out.print("Enter b : ");
            b = sc.nextInt();
            
            if(b!=0){
                c = a/b; 
            }
            else{
                throw new Exception("Donot put 0 in value of b");
            }
        }catch(Exception e ){
            System.out.println("Error : " +e);
        }
        finally{
            System.out.println("Div = " + c);
        }
    }
}
