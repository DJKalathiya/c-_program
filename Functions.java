public class Functions {
    /* public void add(){
        int x;
        int y=2,z=5;
        x = y + z;
        System.out.println(x);
    }
    public static void main(String [] args){
        Functions obj = new Functions();
        obj.add();
    } */
    public void table(int no){
        if(no<=50){
            System.out.println(no + " ");
            no = no + 5;
            table(no);
        }
    }
    public static void main(String [] args){
        Functions obj = new Functions();
        obj.table(5);
    }
}
