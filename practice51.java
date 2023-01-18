class circle{
    public int radius;
    circle(){
        System.out.println("In this no parametar");
    }
    circle(int r){
        System.out.println("I am parameterized circle");
        this.radius = r;
    }
    public double area(){
        return Math.PI*this.radius*this.radius;
    }
}
public class practice51 {
    public static void main(String [] args){
        circle objc = new circle(5);
        System.out.println(objc.area());
    }
    
}
