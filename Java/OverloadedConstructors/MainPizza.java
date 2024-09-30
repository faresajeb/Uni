package OverloadedConstructors;

public class MainPizza {
    public static void main(String[] args) {
        /*Overloaded Constructor: multiple constructors
         with the same name but different parameters.*/

        Pizza pizza = new Pizza("thick crust", "tomato", "mozzarella", "pepperoni");

        System.out.println("here are the ingredients: ");
        System.out.println(pizza.bread);
        System.out.println(pizza.sauce);
        System.out.println(pizza.cheese);
        System.out.println(pizza.topping);

        Pizza pizza2 = new Pizza("thick crust", "tomato", "mozzarella");

        System.out.println("here are the ingredients: ");
        System.out.println(pizza.bread);
        System.out.println(pizza.sauce);
        System.out.println(pizza.cheese);


    }
}
