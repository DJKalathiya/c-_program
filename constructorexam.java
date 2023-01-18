/* class DJ{
    DJ(){
        System.out.println("This is the default constructor of class.");
    }
} */
class Employee {
    Employee(String s, int i) {
        System.out.println("The name of the first employee is : " + s);
        System.out.println("The id of the first employee is : " + i);
    }

    Employee(String s, int i, int salary) {
        System.out.println("The name of the second employee is : " + s);
        System.out.println("The id of the second employe is : " + i);
        System.out.println("The salary of the second employee is : " + salary);
    }
}

public class constructorexam {
    public static void main(String[] args) {
    }
}
