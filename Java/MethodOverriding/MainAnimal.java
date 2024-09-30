package MethodOverriding;

public class MainAnimal {
    public static void main(String[] args) {

        Animal animal = new Animal();
        dog dog = new dog();

        animal.speak();
        dog.speak();
    }
}
