import java.util.Scanner;

class SimpleInterst{
    Scanner sc = new Scanner(System.in);
    float p,r,t,si;
    void getpara(){
        System.out.println("Enter principle : ");
        p = sc.nextFloat();
        System.out.println("Enter rate of interst : ");
        r = sc.nextFloat();
        System.out.println("Enter time duration : ");
        t = sc.nextFloat();
    }
    void findArea(){
        si = p*r*t/100;
    }
    void show(){
        System.out.println("Simple INterst : " + si);
    }
}
public class encapsulation {
    public static void main(String[] args){
        SimpleInterst obj = new SimpleInterst();
        obj.getpara();
        obj.findArea();
        obj.show();
    }
}
