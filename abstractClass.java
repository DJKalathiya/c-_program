abstract class Parents2{
    public Parents2(){
        System.out.println("ME base2 ka constructor hun!");
    }
    public void sayHello(){
        System.out.println("HEllo gyus!");
    }
    abstract public void greet();
    abstract public void greet2();
}
class Child2 extends Parents2{
    @Override
    public void greet(){
        System.out.println("very good morning");
    }
    @Override
    public void greet2(){
        System.out.println("Very Good afternoon");
    }
}
abstract class Child3 extends Parents2{
    public void th(){
        System.out.println("Hey! what are you doing !");
    }
}
public class abstractClass {
    public static void main(String [] args){
        /* Child2 obj = new Child2(); */
        /* Parents2 p = new Parents2(); --- erroer*/
        
    }
    
}
