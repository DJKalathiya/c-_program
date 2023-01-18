import java.util.Random;
import java.util.Scanner;

class Game {
    public int number;
    public int InputNumber;
    public int noOfguess = 0;

    public int getNumber() {
        return noOfguess;
    }

    public void setNumber(int noOfguess) {
        this.noOfguess = noOfguess;
    }

    Game() {
        Random rand = new Random();
        this.number = rand.nextInt(100);
    }

    void takeUserInput(){
        System.out.println("Guess the number : ");
        Scanner sc = new Scanner(System.in);
        InputNumber = sc.nextInt();
    }

    boolean isCorrectNumber() {
        noOfguess++;
        if (InputNumber == number) {
            System.out.format("Yes you guess correct is was %d\nyou guessed it in %d attempts\n", number, noOfguess);
            return true;
        } else if (InputNumber < number) {
            System.out.println("This number is low ");
        } else if (InputNumber > number) {
            System.out.println("This number is high");
        }
        return false;
    }

}
public class gameGuessNumber {
    public static void main(String[] args) {
        Game g = new Game();
        boolean b = false;
        while (!b) {
            g.takeUserInput();
            b = g.isCorrectNumber();
        }
    }
}
