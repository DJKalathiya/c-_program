import java.util.Enumeration;
import java.util.Vector;

public class enumProgram {
    public static void main(String [] args){
        Enumeration courses;
        Vector obj = new Vector();
        obj.add("c++");
        obj.add("java");
        obj.add("php");
        obj.add("android");
        obj.add("react");
        
        courses = obj.elements();
        while(courses.hasMoreElements()){
            System.out.println(courses.nextElement());
        }
    }
}
