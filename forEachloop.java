

public class forEachloop {
    public static void main(String [] args){
        /* int arr[] = {1,2,3,4,5,6};
        for(int element : arr){
            System.out.print(element + " ");
        } */

        /* String [] students = {"darshan", "rohan", "ankit", " jay"};
        System.out.println(students.length);
        System.out.println(students[3]); */

        int[] marks = {1,2,3,4,5,6};

        /* System.out.println("Printing using for loop");
        for(int i=marks.length-1; i>=0; i--){
            System.out.println(marks[i]);
        } */
        for(int e : marks){
            System.out.println(e);
        }
    }
}
