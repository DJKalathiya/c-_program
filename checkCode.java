import java.util.Scanner;

/* abstract class Pen{
    abstract void write();
    abstract void refill();
}

class FountainPen extends Pen{
    void write(){
        System.out.println("Write");
    }
    void refill(){
        System.out.println("Refill");
    }
    void changeNib(){
        System.out.println("Changing the nib");
    }
} */
/* class Monkey{
    void jump(){
        System.out.println("Jumping...");
    }
    void bite(){
        System.out.println("Biting...");
    }
}

interface BasicAnimal{
    void eat();
    void sleep();
}

class Human extends Monkey implements BasicAnimal{
    void speak(){
        System.out.println("Hello sir!");
    }

    @Override
    public void eat() {
        System.out.println("Eating");
    }

    @Override
    public void sleep() {
        System.out.println("Sleeping");
    }
}
 */
/* public class checkCode
 {
    public static void main(String[] args) {
        // Q1 + Q2
        FountainPen pen = new FountainPen();
        pen.changeNib();
 */
// Q3
/* Human harry = new Human();
harry.sleep();

// Q5
Monkey m1 = new Human();
m1.jump();
m1.bite();
// m1.speak(); --> Cannot use speak method because the reference is monkey which does not have speak method

BasicAnimal lovish = new Human();
// lovish.speak(); --> error
lovish.eat();
lovish.sleep(); */

//     }
// }
/* import java.util.Scanner;

public class checkCode {
    public static void main(String arg[]) {

        int a = 6000;
        int b = 0;
        // Without Try:
        // int c = a / b;
        // System.out.println("The result is " + c);
        // With Try:
        try {
            int c = a / b;
            System.out.println("The result is " + c);
        } catch (Exception e) {
            System.out.println("We failed to divide. Reason: ");
            System.out.println(e);
        }
        System.out.println("End of the program");
    }
}
 */

/* import java.util.Scanner;

class MyException extends Exception{
    @Override
    public String toString() {
        return "I am toString()";
    }

    @Override
    public String getMessage() {
        return "I am getMessage()";
    }
}
class MaxAgeException extends Exception{
    @Override
    public String toString() {
        return "Age cannot be greater than 125";
    }

    @Override
    public String getMessage() {
        return "Make sure that the value of age entered is correct";
    }
}
public class checkCode {
    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        if (a<9){
            try{
                // throw new MyException();
                throw new ArithmeticException("This is an exception");
            }
            catch (Exception e){
                System.out.println(e.getMessage());
                System.out.println(e.toString());55
                e.printStackTrace();
                System.out.println("Finished");
            }
            System.out.println("Yes Finished");
        }
    }
}
 */

/* public class checkCode{
    public static void main(String [] args){
        char ch;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter one character : ");
        ch = sc.next().charAt(0);
        switch(ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                System.out.println("vowel");
            break;
            default :
                System.out.println("consonant");
                break;
        }
    }
} */
/* public class checkCode{
    public static void main(String [] args){
        int fact = 1, count = 1;
        int no;
        Scanner sc = new Scanner(System.in);
        System.out.print("Entr any number to find factorail : ");
        no = sc.nextInt();
        do{
            fact = fact*count;
            count++;
        }while(count <= no);
        System.out.println("Factorial is : " + fact);
    }
} */
/* class outerAddition {
    public void outAdd() {
        int x, a = 1, b = 2;
        x = a + b;
        System.out.println("outadd = " + x);
    }
    class InnerAddition {
        public void inAdd() {
            int x, a = 2, b = 3;
            x = a + b;
            System.out.println("Inner addition : " + x);
        }
    }
}
public class checkCode {
    public static void main(String[] args) {
        outerAddition obj = new outerAddition();
        obj.outAdd();

        outerAddition.InnerAddition obj2 = obj.new InnerAddition();
        obj2.inAdd();
    }
} */

public class checkCode {
    public static void main(String[] args) {
        int num = 2394;
        int temp = 0;
        while (num > 0) {
            int r = num % 10;
            num = num / 10;
            if (temp < r) {
                temp = r;
            }
        }
        System.out.println("MAx digit is : " + temp);
    }
}