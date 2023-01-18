class poly{
    void area(){
        System.out.println("This is void ");
    }
    void area(int height, int width){
        int area;
        area = height * width;
        System.out.println("Area of rectangle : "+area);
    }
    void area(int side){
        int area;
        area = side * side;
        System.out.println("Area of square is : "+area);
    }
    void area(Double radius){
        double area ;
        area = 3.14*radius*radius;
        System.out.println("Area of circle is : " + area);
    }
}
public class polymorphism {
    public static void main(String [] args){
        poly obj = new poly();
        obj.area();
        obj.area(4, 6);
        obj.area(2.4);
        obj.area(3);
    }
}
