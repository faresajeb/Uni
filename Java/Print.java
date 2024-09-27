public class Print {
    public static void main(String[] args) {

        boolean myBoolean = true;
        char myChar = 'A';
        String myString = "Fares";
        int myInt = 20;
        double myDouble = 1000.2;

        System.out.printf("%b\n", myBoolean);

        System.out.printf("%c\n", myChar);

        System.out.printf("Hello %s\n", myString);
        System.out.printf("Hello %10s\n", myString);//prints 10 chars including the "myString"
        System.out.printf("Hello %-10s\n", myString);

        System.out.printf("Hello %d\n", myInt);

        System.out.printf("%f\n", myDouble);
        System.out.printf("%.2f\n", myDouble);
        System.out.printf("%-20f\n", myDouble);
        System.out.printf("%+f\n", myDouble);
        System.out.printf("%020f\n", myDouble);
        System.out.printf("%,f\n", myDouble);

    }
}
