import java.util.ArrayList;

public class ForEachLoop {
    public static void main(String[] args) {

        String[] animals = {"car", "dog", "bird", "mouse"};
        ArrayList<String> animalsList = new ArrayList<String>();

        animalsList.add("cat");
        animalsList.add("dog");
        animalsList.add("bird");
        animalsList.add("mouse");

        for (String i : animals) { //':' means "in".
            System.out.println(i);
        }
        for (String i : animalsList) { //':' means "in".
            System.out.println(i);
        }
    }
}
