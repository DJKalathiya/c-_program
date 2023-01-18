/* interface Animal {
    default void say() {
        System.out.println("This is default method !");
    }

    void bark();
}

public class defaultmethod implements Animal{
    @Override
    public void bark() {
        System.out.println("Dogs, barking.. ");
    }
    public static void main(String[] args) {
        defaultmethod obj1 = new defaultmethod();
        obj1.bark();
        obj1.say();
    }
} */
interface MyCamera {
    void takeSnap();

    void recordVideo();

    private void greet() {
        System.out.println("Good morning");
    }

    default void record4k() {
        greet();
        System.out.println("REcording in 4k....");
    }
}

interface MyWifi {
    String[] getNetwork();

    void connectToNetwork(String network);
}

class myCellPhone {
    void callNumber(int phoneNumber) {
        System.out.println("Calling ---- " + phoneNumber);
    }

    void pickCall() {
        System.out.println("Connecting,,,,");
    }
}

class MySmartPhone extends myCellPhone implements MyWifi, MyCamera {
    public void takeSnap() {
        System.out.println("Taking snap !!!");
    }

    public void recordVideo() {
        System.out.println("Taking snap ...");
    }

    /*
     * public void record4k() {
     * System.out.println("Taking snap and recording in 4k");
     * }
     */

    public String[] getNetworks() {
        System.out.println("Getting list of Network");
        String[] networkList = { "Harry", "DJ", "DK" };
        return networkList;
    }

    public void connectToNetwork(String network) {
        System.out.println("Connecting to " + network);
    }

    public void sampleMeth() {
        System.out.println("Meth");
    }
}

public class defaultmethod {
    public static void main(String[] args) {
        /*
         * MySmartPhone ms = new mySmartPhone();
         * ms.record4k();
         * 
         * String[] ar = ms.getNetwork();
         * for (String item : ar) {
         * System.out.println(item);
         * }
         
        MyCamera cam1 = new MySmartPhone();
        cam1.record4k();
        */
        MySmartPhone s = new MySmartPhone();
        s.sampleMeth();
        s.recordVideo();
        s.getNetwork();
        s.callNumber(8686);
    }
}
// NOt working this code , i donot know why this code not working!