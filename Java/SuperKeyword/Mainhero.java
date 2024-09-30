package SuperKeyword;

public class Mainhero {
    public static void main(String[] args) {

        Hero hero1 = new Hero("Batman", 42, "Money");
        Hero hero2 = new Hero("Spider Man", 28, "Web");

        System.out.println(hero1.name);
        System.out.println(hero1.age);
        System.out.println(hero1.power);

        System.out.println(hero1);
        System.out.println(hero2);

    }
}
