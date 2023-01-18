public class LeapNested {
    public static void main(String[] args) {
        int year = 2006;

        if (year % 400 == 0) {
            System.out.println("This is leap year 400");
        } else if (year % 100 == 0) {
            System.out.println("This is not leap year");
        } else if (year % 4 == 0) {
            System.out.println("This is leap year in 4");
        } else {
            System.out.println("This is not leap year 2");
        }
    }
}
