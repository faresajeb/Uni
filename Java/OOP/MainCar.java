package OOP;

public class MainCar {
    public static void main(String[] args) {
        //object is an instance of a class that may contain attributes and methods.
        //attribute: the characteristics that an object has.
        //methods: the different actions that the object can perform.

        car myCar1 = new car();
        car myCar2 = new car();

        System.out.println(myCar1.make);
        System.out.println(myCar1.model);

        System.out.println();

        System.out.println(myCar2.make);
        System.out.println(myCar2.model);

        myCar1.drive();
        myCar1.brake();
    }


}
