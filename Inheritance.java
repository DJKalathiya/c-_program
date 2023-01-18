/* class Addition{
    void add(){
        int a,b=2, c=3;
        a = b + c;
        System.out.println("sum : "+a);
    }
} */
/* interface addition {
    void add();
} */
/* class subtraction  {
    void sun() {
        int a, b = 2, c = 1;
        a = b - c;
        System.out.println("Subtraction is : " + a);
    }
} */

/*
 * class divide extends subtraction{
 * void div(){
 * int a , b=4, c=2;
 * a = b/c;
 * System.out.println("Division is : " + a);
 * }
 * }
 */
/* class division extends subtraction implements addition {
    public void add() {
        int a, b = 2, c = 3;
        a = b + c;
        System.out.println("Addition : " + a);
    }

    void div() {
        int a, b = 4, c = 2;
        a = b / c;
        System.out.println("Division is : " + a);
    }
} */
/* interface Geometry {
    void rect(int heigth, int width);

    void square(int side);

    void circle(float radius);
}

class Easy implements Geometry {
    public void rect(int height, int width) {
        int area;
        area = height * width;
        System.out.println("Area of rectangle : " + area);
    }

    public void square(int side) {
        int area;
        area = side * side;
        System.out.println("Area of square is : " + area);
    }

    public void circle(float radius) {
        double area;
        area = 3.14 * radius * radius;
        System.out.println("Area of circle is : " + area);
    }
}

public class Inheritance {
    public static void main(String[] args) {
        Easy obj = new Easy();
        obj.rect(3, 5);
        obj.square(3);
        obj.circle(2.4f);
    }
    /*
     * public static void main(String[] args) {
     * division obj = new division();
     * obj.add();
     * obj.sun();
     * obj.div();
     * }
     */

abstract class Geometry {
    abstract void rect(int height, int width);

    public void square(int side) {
        int area;
        area = side * side;
        System.out.println("Area of square is : " + area);
    }

    public void circle(float radius) {
        double area;
        area = 3.14 * radius * radius;
        System.out.println("Area of circle is : " + area);
    }
}
class Easy extends Geometry{
    public void rect(int height, int width) {
        int area;
        area = height * width;
        System.out.println("Area of rectangle : " + area);
    }

}
public class Inheritance  {
    public static void main(String[] args) {
        Easy obj = new Easy();
        obj.rect(12, 13);
        obj.square(12);
        obj.circle(2.2f);
    }
}
