class Base {
    public int x;

    public int getx() {
        return x;
    }

    public void setx(int x) {
        System.out.println("I am in base and setting x now");
        this.x = x;
    }

    public void printMe() {
        System.out.println("I am in constructor");
    }
}

class Derived extends Base {
    public int y;

    public int gety() {
        return y;
    }

    public void sety(int y) {
        this.y = y;
    }
}

public class basicInheritance {
    public static void main(String[] args) {
        // creating an object of base class
        Base b = new Base();
        b.setx(4);
        System.out.println(b.getx());

        Derived d = new Derived();
        d.sety(43);
        System.out.println(d.gety());
    }
}
