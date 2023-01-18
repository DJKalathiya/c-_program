import java.util.Scanner;

public class twodimensional {
    public static void main(String [] args){
        
        Scanner sc = new Scanner(System.in);
        int a[][] = new int[3][3];  

        System.out.println("Enter 9 value one by one : ");
        for(int i=0; i<= 2; i++){
            for(int j=0; j<=2; j++){
                a[i][j] = sc.nextInt();
            }
        }
        System.out.println("Two dimensonal array like this :");
        for(int i=0; i<=2; i++){
            for(int j=0; j<=2; j++){
                System.out.print(a[i][j] +" ");
            }
            System.out.println("");
        }
    }
}
