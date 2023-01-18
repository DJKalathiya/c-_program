import javax.naming.ldap.LdapName;

class Ekclass {
    int a;

    public int getA() {
        return a;
    }

    Ekclass(int a) {
        this.a = a;
    }

    public int returnnone() {
        return 1;
    }
}

class DoClass extends Ekclass {
    DoClass(int c) {
        super(c);
        System.out.println("I am a constructor");
    }
}

public class superKeyword {
    public static void main(String[] args) {
        Ekclass e = new Ekclass(65);
        DoClass d = new DoClass(5);
        System.out.println(e.getA());
    }
}