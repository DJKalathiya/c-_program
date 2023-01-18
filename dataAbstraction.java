class Showroom{
    public void company(){
        System.out.println("APple");
    }
    public void model(){
        System.out.println("Duster");
    }
    public void color(){
        System.out.println("White,gray,black");
    }
    public void oilType(){
        System.out.println("Petrol");
    }
    public void price(){
        System.out.println("1000000");
    }
}
public class dataAbstraction {
    public static void main(String []args){
        Showroom obj = new Showroom();
        obj.company();
        obj.model();
        obj.color();
        obj.oilType();
        obj.price();


        
    }
}
