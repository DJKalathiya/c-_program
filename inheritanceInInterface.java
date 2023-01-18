interface sample1 {
    void math1();

    void math2();
}

interface sample2 extends sample1 {
    void math3();

    void math4();
}

class Mysample implements sample2 {
    public void math1() {
        System.out.println("math1");
    }

    public void math2() {
        System.out.println("math2");
    }

    public void math3() {
        System.out.println("math3");
    }

    public void math4() {
        System.out.println("math4");
    }
}

public class inheritanceInInterface {
    public static void main(String[] args) {
        Mysample obj1 = new Mysample();
        obj1.math1();
        obj1.math2();
        obj1.math3();
       /*  obj1.math4(); */
       
    }
}
