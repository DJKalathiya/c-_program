import java.util.Scanner;

public class addTwomatrix {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int row ,col;

        System.out.println("Enter row and column number : ");
        row = sc.nextInt();
        col = sc.nextInt();

        int [][] a = new int [row][col];
        int [][] b = new int [row][col];
        int [][] c = new int [row][col];

        System.out.println("Enter elements of matrix a :");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                a[i][j] = sc.nextInt();
            }
        }
         
        System.out.println("Enter elements of matrix b:");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                b[i][j] = sc.nextInt();
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        System.out.println("Sum of two matrix is : ");
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                System.out.print(c[i][j]+ " ");
            }
            System.out.println("");
        }
    }
}
