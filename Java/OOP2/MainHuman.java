package OOP2;

public class MainHuman {
    public static void main(String[] args) {
        Human human = new Human("Fares", 20, 90);
        Human human2 = new Human("Rick", 32, 83);

        System.out.println(human2.name);
        human.eat();
        human2.drink();
    }
}
