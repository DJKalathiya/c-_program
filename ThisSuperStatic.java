/* class Para{
    int height = 2, width = 2;
}
class Rectangle extends Para{
    int height = 10, width = 10;
    public void area(){
        
        int area ;
        area = height*width;
        System.out.println("Area 1 : "+ area);

        area = super.height * super.width;
        System.out.println("Area 2 : " + area);
    }
} */
class Rectangle{
    static int height , width,area;
    static void area(){
        area = height*width;
        System.out.println("Area of rectangle : "+area);
    }
}
public class ThisSuperStatic {
    public static void main(String [] args){
        Rectangle.height = 20;
        Rectangle.width = 10;
     
        Rectangle.area();
    }
}
