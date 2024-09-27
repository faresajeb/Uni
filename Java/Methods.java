public class Methods {
    public static void main(String[] args) {
        hello();

        String name = "Fares";
        hello1(name);

        int age = 20;
        hello2(age);

        hello3(name, age);

        int x = 3;
        int y = 4;
        System.out.println(add(x, y));
    }

    static void hello() {
        System.out.println("Hello");
    }

    static void hello1(String name) {
        System.out.println(name);
    }

    static void hello2(int age) {
        System.out.println(age);
    }

    static void hello3(String name, int age) {
        System.out.println(name +" "+ age);
    }
    static int add(int x, int y) {
        return x + y;
    }
}
