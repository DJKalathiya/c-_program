abstract class Pen {
    abstract void write();

    abstract void refill();
}

class FountainPen extends Pen {
    void write() {
        System.out.println("Write");
    }

    void refill() {
        System.out.println("refilling..");
    }

    void changeNib(){
        System.out.println("Changing the nib!");
    }
}

public class practiceabstract {
    public static void main(String[] args) {
        FountainPen pen = new FountainPen();
        pen.changeNib();
    }

}
