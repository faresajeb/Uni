public class OverloadedMethods {
    public static void main(String[] args) {

        //int x = add(1, 2);
        //int x = add(1, 2, 3);
        //int x = add(1, 2, 3, 4);
        //double x = add(1.0, 2.0);
        //double x = add(1.0, 2.0, 3.0);
        double x = add(1.0, 2.0, 3.0, 4.0);

        System.out.println(x);

    }

    static int add(int a, int b) {
        System.out.println("this is overloaded method num:1");
        return a + b;
    }

    static int add(int a, int b, int c) {
        System.out.println("this is overloaded method num:2");
        return a + b + c;
    }

    static int add(int a, int b, int c, int d) {
        System.out.println("this is overloaded method num:3");
        return a + b + c + d;
    }

    static double add(double a, double b) {
        System.out.println("this is overloaded method num:4");
        return a + b;
    }

    static double add(double a, double b, double c) {
        System.out.println("this is overloaded method num:5");
        return a + b + c;
    }

    static double add(double a, double b, double c, double d) {
        System.out.println("this is overloaded method num:6");
        return a + b + c + d;
    }
}
