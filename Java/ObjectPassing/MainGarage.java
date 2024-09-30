package ObjectPassing;

public class MainGarage {
    public static void main(String[] args) {

        Garage garage = new Garage();
        Car3 car = new Car3("BMW");
        Car3 car2 = new Car3("Mercedes");

        garage.park(car);
        garage.park(car2);


    }
}
