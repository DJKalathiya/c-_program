class Base {
    Base() {
        System.out.println("I am a constructor");
    }

    Base(int x) {
        System.out.println("I am an overloaded constructor with value of x as : " + x);
    }
}

class Derived extends Base {
    Derived() {
        System.out.println("I am a derived class constructor");
    }

    Derived(int x, int y) {
        super(x);
        System.out.println("I am an overloaded constrvtor of derived with value of y as : " + y);
    }
}

class child extends Derived {
    child() {
        System.out.println("I am a child of derived constructor");
    }

    child(int x, int y, int z) {
        super(x, y);
        System.out.println("I am an overloaded constructor of derived with value of z as : " + z);
    }
}

public class constrInINheri {
    public static void main(String[] args) {
        /*
         * Base b = new Base();
         * Derived d = new Derived();
         */
        /* Derived d = new Derived(14,9); */
        child c = new child(12, 13, 15);
    }
}
