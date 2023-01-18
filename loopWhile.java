

public class loopWhile {
    public static void main(String[] args) {
        /* System.out.println("using loops : "); */
        /* int i = 1; */
        /* while (i <= 20) { */
        /* System.out.println(i); */
        /* i++; */
        /* if (i == 14) { */
        /* break; */
        /* } */

        /* } */
        /* System.out.println("Finish Runnig while loop !"); */
        /* Random r = new Random();
        int a = r.nextInt();
        System.out.println(a); */
        /* int b = 1;
        do{
            System.out.println(b);
            b++;
        }while(b<5); */
        /* for(int i=5; i!=0; i--){
            if(i == 3){
                continue;
            }
            System.out.println(i);
        } */
        int i=0;
        do{
            i++;
            if(i==2){
                System.out.println("Ending loop");
                continue;
            }
            System.out.println(i);
            System.out.println("Java is great");
        }while(i<5);
        System.out.println("LOOPs ends hear");

    }
}
