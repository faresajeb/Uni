package Encapsulation;

public class MainCar6 {
    public static void main(String[] args) {

        Car6 car = new Car6("Chevrolet", "Camaro", 2021);

        //System.out.println(car.make);error we need a getter
        System.out.println(car.getMake());//using getters(more secure)

        //car.year = 2022;error we need a setter
        car.setYear(2022);
        System.out.println(car.getYear());
    }
}
