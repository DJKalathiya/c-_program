public class recursionJ{
    static int fact(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }
    public static void main(String[] args){
        int x=3;
        System.out.println("The value of factorial x is : " + fact(x));
    }
}