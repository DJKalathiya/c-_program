import java.util.Random;
import java.util.Scanner;

public class gamesrps {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter 0 for Rock, 1 for paper , 2 for scissor :");
            int userINput = sc.nextInt();

            Random random = new Random();
            int computerINput = random.nextInt(3);

            if (userINput == computerINput) {
                System.out.println("Draw");
            } else if (userINput == 0 && computerINput == 2 || userINput == 1 && computerINput == 0
                    || userINput == 2 && computerINput == 1) {
                System.out.println("You win buddy now you can participate in next game");
            } else {
                System.out.println("Computer win !");
            }
            System.out.println("Computer choice : " + computerINput);
            if (computerINput == 0) {
                System.out.println("Computer choice : Rock");
            } else if (computerINput == 1) {
                System.out.println(("Computer choice : paper"));
            } else if (computerINput == 2) {
                System.out.println("Computer choice : Scissors");
            }
        }
    }
}
