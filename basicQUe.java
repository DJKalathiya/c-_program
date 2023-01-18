/* class Employee {
    int salary;
    String name;

    public int getSalary() {
        return salary;
    }

    public String getName() {
        return name;
    }

    public void setName(String n) {
        name = n;
    }
} */
class CellPhone {
    public void ring() {
        System.out.println("Ringing....");
    }

    public void vibrate() {
        System.out.println("Vibrating...");
    }

    public void callFriend() {
        System.out.println("Calling sv...");
    }
}

public class basicQUe {
    public static void main(String[] args) {
        /*
         * Employee dj = new Employee();
         * dj.setName("CodeWithDj");
         * dj.salary = 233;
         * System.out.println(dj.getSalary());
         * System.out.println(dj.getName());
         */

        CellPhone asus = new CellPhone();
        asus.callFriend();
        asus.vibrate();
        asus.ring();
    }
}
