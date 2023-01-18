class Employee {
    int id;
    int salary;
    String name;

    public void printDetails() {
        System.out.print("My id is " + id);
        System.out.println(" and my name is " + name);
    }

    public int getSalary() {
        return salary;
    }
}

public class oopINtro {
    public static void main(String[] args) {
        System.out.println("This is our custom class");
        Employee dj = new Employee();
        Employee dk = new Employee();

        dj.id = 12;
        dj.salary = 123456;
        dj.name = "Darshan";

        dk.id = 34;
        dk.salary = 43252;
        dk.name = "DJKalathiya";

        dj.printDetails();
        
        dk.printDetails();
        int salary = dk.getSalary();
        System.out.println(salary);
    }
}
