import java.util.ArrayList;

public class TwoDAarrayLists {
    public static void main(String[] args) {

        ArrayList<String> list = new ArrayList();
        list.add("pasta");
        list.add("donuts");
        list.add("bread");

        ArrayList<String> list2 = new ArrayList();
        list2.add("tomatoes");
        list2.add("cucumbers");
        list2.add("lemons");

        ArrayList<String> list3 = new ArrayList();
        list3.add("soda");
        list3.add("coffee");

        ArrayList<ArrayList<String>> grocerylist = new ArrayList();

        System.out.println(list);
        System.out.println(list.get(0));

        System.out.println(list2);

        grocerylist.add(list);
        grocerylist.add(list2);
        grocerylist.add(list3);

        System.out.println(grocerylist);

        System.out.println(grocerylist.get(0));
        System.out.println(grocerylist.get(0).get(2));


    }
}
