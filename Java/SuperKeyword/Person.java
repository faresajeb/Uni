package SuperKeyword;

public class Person {//super class

    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String toString() {
        return this.name + " " + this.age;
    }
}
