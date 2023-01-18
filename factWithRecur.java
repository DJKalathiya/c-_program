import java.util.Scanner;

import javax.xml.crypto.dsig.spec.HMACParameterSpec;

public class factWithRecur {
    /*
     * static int fact(int no) {
     * if (no >= 1) {
     * return no* fact(no - 1);
     * } else {
     * return 1;
     * }
     * }
     * public static void main(String[] args) {
     * System.out.println("This program is for factorial number "+fact(4));
     * }
     */

    /*
     * public static void main (String [] args) {
     * int a[] = { 12, 13, 34, 56, 78, 87, 34,6, 12, 67 };
     * int max = a[0];
     * for (int i = 1; i < a.length; i++) {
     * if (max > a[i]) {
     * max = a[i];
     * }
     * }
     * System.out.println(max);
     * }
     */

    /*
     * static int power(int base, int expo){
     * int f =1;
     * for(int i=1; i<=expo; i++){
     * f = f*base;
     * }
     * return f;
     * }
     * public static void main(String [] args){
     * System.out.println("power of 6^3 is :"+power(6,3));
     * }
     */

    /*
     * public static void main(String [] args){
     * int a[] = {19,25,44,56,78,45,87};
     * int max = a[0];
     * int min = a[0];
     * 
     * for(int i=0; i<a.length; i++){
     * if(max< a[i]){
     * max = a[i];
     * }
     * if(min > a[i]){
     * min = a[i];
     * }
     * }
     * System.out.println("Maximun number is : "+max);
     * System.out.println("Minimum number is : "+min);
     * System.out.println("Differnce between max. and min. : "+ (max-min));
     * }
     */

    // highest common factor
    /*
     * public static void main(String [] args){
     * Scanner sc = new Scanner(System.in);
     * int num1, num2,m=1;
     * System.out.println("Enter number 1 and 2 : ");
     * num1 = sc.nextInt();
     * num2 = sc.nextInt();
     * 
     * for(int i=1; ; i++){
     * if(i%num1== 0 && i%num2 == 0){
     * m = i;
     * break;
     * }
     * }
     * System.out.print("Highest common factor of two number is :" + m);
     * }
     */

    /*
     * public static void main(String[] args) {
     * Scanner sc = new Scanner(System.in);
     * int num;
     * System.out.println("ENter number : ");
     * num = sc.nextInt();
     * int h = 0;
     * int m = 1;
     * int l = num % 10;
     * while (num != 0) {
     * h = num % 10;
     * m = m + h;
     * num = num / 10;
     * 
     * }
     * System.out.println("High nummber is " + h + " Lower number is " + l);
     * System.out.println("multipication is : " + m);
     * }
     */

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row, col;
        System.out.println("Enter number of row and column for 2 matrix : ");
        row = sc.nextInt();
        col = sc.nextInt();

        int[][] a = new int[row][col];
        int[][] b = new int[row][col];
        int[][] c = new int[row][col];

        System.out.println("Enter number of element 1");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println("");
        }

        System.out.println("Enter number of element 2");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                b[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(b[i][j] + " ");
            }
            System.out.println("");
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                c[i][j] = a[i][j] - b[i][j];
            }
        }

        System.out.println("Subtraction of two matrix is : ");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(c[i][j] + " ");
            }
            System.out.println("");
        }
    }
}
