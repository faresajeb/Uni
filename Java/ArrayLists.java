import java.util.ArrayList;

public class ArrayLists {
    public static void main(String[] args) {
        //ArrayList is a resizable array, stores reference data types.
        //can be changed during runtime.

        ArrayList<String> food = new ArrayList<String>();
        ArrayList<Integer> nums = new ArrayList<Integer>(); //not int

        food.add("Apple");
        food.add("Banana");
        food.add("Bread");

        for (int i = 0; i < food.size(); i++)
        {
            System.out.println(food.get(i));
        }

        food.set(0, "Sushi"); //Replace
        for (int i = 0; i < food.size(); i++)
        {
            System.out.println(food.get(i));
        }

        food.remove(0);
        for (int i = 0; i < food.size(); i++)
        {
            System.out.println(food.get(i));
        }

        food.clear();
        for (int i = 0; i < food.size(); i++)
        {
            System.out.println(food.get(i));
        }


    }
}
