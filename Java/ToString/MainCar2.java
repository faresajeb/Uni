package ToString;

public class MainCar2 {
    public static void main(String[] args) {

        Car2 car = new Car2();

        System.out.println(car.make);
        System.out.println(car.model);
        System.out.println(car.color);
        System.out.println(car.year);

        //System.out.println(car);//prints the address of the ar object in the memory.

        System.out.println(car);//using overloaded toString method.


    }
}
