import java.util.Random;

public class Randoms {
    public static void main(String[] args) {
        Random rand = new Random();

        int dice = rand.nextInt(1, 7);
        System.out.println(dice);



    }
}
