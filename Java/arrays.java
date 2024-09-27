import java.util.Scanner;

public class arrays {
    public static void main(String[] args) {

        String[] cars = new String[3];
        Scanner scanner = new Scanner(System.in);

        cars[0] = "Audi";
        cars[1] = scanner.nextLine();
        cars[2] = "Honda";
        for (int i = 0; i < 3; i++)
        {
            System.out.println(cars[i]);
        }
    }
}
