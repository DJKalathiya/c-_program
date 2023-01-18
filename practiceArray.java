public class practiceArray {
    public static void main(String[] args) {
        /*
         * float [] marks = {1.6f,2.5f,3.5f,4.5f,5.3f,6.2f};
         * float sum = 0;
         * for(float e : marks){
         * sum = sum + e;
         * }
         * System.out.println("This value of sum is " + sum);
         */

        /*
         * float[] marks = { 1.6f, 2.5f, 3.5f, 4.5f, 5.3f, 6.2f };
         * float num = 3.15f;
         * boolean isInArray = false;
         * for (float e : marks) {
         * if (num == e) {
         * isInArray = true;
         * break;
         * }
         * }
         * if (isInArray) {
         * System.out.println("The value is present in this array");
         * } else {
         * System.out.println("The value is not present in this array");
         * }
         */

        /* int[] arr = { 1, 2, 3, 4, 5, 6 };
        int l = arr.length;
        int n = (l/2);
        int temp;

        for (int i = 0; i < n; i++) {
            temp = arr[i];
            arr[i] = arr[l - i - 1];
            arr[l - i - 1] = temp;
        }
        for (int e : arr) {
            System.out.println(e + " ");
        } */

        /* int[] arr = { 1, 2, 3, 4, 5, 6 };2
        int max = 0;
        for(int e : arr){
            if(e>max){
                max = e;
            }
        }
        System.out.println("The value of the maximun number in this array is " + max); */

        /* int[] arr = { 1, 2, 3, 4, 5, 6 };
        System.out.println(Integer.MIN_VALUE);
        System.out.println(Integer.MAX_VALUE); */



    }
}
