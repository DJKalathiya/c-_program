public class practiceOnMEthods {
    /* static void pattern1(int n)                    {
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    } */
    static int fib(int n){
        if(n==1 || n==2){
            return n-1;
        }
        else{
            return fib(n-1) + fib(n-2);
        }
    }



    /* public static void main(String[] args){
        pattern1(5);
    } */
    public static void main(String[] args){
        int result = fib(7);
        System.out.println(result); 
    }

}
