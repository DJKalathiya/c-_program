class Rectangle{
    /* int height,width,area;
    Rectangle(){
        height = 4;
        width = 5;
        area = height * width;
        System.out.println("Area of Rectangle : " + area);
    } */
    int area;
    Rectangle(int height, int width){
        area = height * width;
        System.out.println("Area of Rectangle : " + area);
    }
}
public class classAndObject {
    public static void main(String [] args){
        Rectangle obj = new Rectangle(3,5);       
    }

    /*
     * int height;
     * int width;
     * int area;
     * void findArea(){
     * area = height * width;
     * System.out.print("area is = " + area);
     * }
     * public static void main(String [] args){
     * classAndObject obj = new classAndObject();
     * obj.height = 3;
     * obj.width = 3;
     * 
     * obj.findArea();
     * }
     */
    /* int height;
    int width;
    int area;

    void para() {
        height = 2;
        width = 3;
    }
    void findArea(){
        area = height * width;
        System.out.println("Area is : " + area);
    }
    public static void main(String [] args){
        classAndObject obj = new classAndObject();
        obj.para();
        obj.findArea();
    } */
}
