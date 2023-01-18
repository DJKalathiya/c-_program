class phone {
    public void show() {
        System.out.println("Phone is MI 8A ");
    }

    public void on() {
        System.out.println("This is phone");
    }
}

class smartphone extends phone {
    public void model() {
        System.out.println("This smartphone is newest");
    }

    public void on() {
        System.out.println("This is smartphone ");
    }
}

public class dynamic {
    public static void main(String[] args) {
        phone obj = new smartphone();
        obj.show();
        obj.on();
    }
}
