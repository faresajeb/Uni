package inheritance;

public class MainVehicle {
    public static void main(String[] args) {

        Car4 car = new Car4();
        Bicycle bicycle = new Bicycle();

        car.go();
        bicycle.stop();

        System.out.println(car.speed);
        System.out.println(bicycle.speed);

        System.out.println(car.wheels);
        System.out.println(bicycle.wheels);

    }
}
