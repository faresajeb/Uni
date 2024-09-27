public class StringMethod {
    public static void main(String[] args) {
        String name = "Fares";

        boolean comp = name.equals("Fares");
        System.out.println(comp);

        boolean comp1 = name.equalsIgnoreCase("fares");
        System.out.println(comp1);

        int length = name.length();
        System.out.println(length);

        char ch = name.charAt(0);
        System.out.println(ch);

        int result = name.indexOf("o");
        System.out.println(result);

        boolean res = name.isEmpty();
        System.out.println(res);

        String upper = name.toUpperCase();
        System.out.println(upper);

        String lower = name.toLowerCase();
        System.out.println(lower);

        String name1 = "    Fares    ";

        String trim = name1.trim();
        System.out.println(trim);

        String replace = name.replace("a", "o");
        System.out.println(replace);
    }
}
