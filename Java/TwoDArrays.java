import java.util.Scanner;

public class TwoDArrays
{
    public static void main(String[] args)
    {
        String[][] cars = new String[3][3];
        Scanner scanner = new Scanner(System.in);

        cars[0][0] = "Audi";
        cars[0][1] = "BMW";
        cars[0][2] = "Honda";
        cars[1][0] = "Ford";
        cars[1][1] = "Mazda";
        cars[1][2] = "Red Mazda";
        cars[2][0] = "Mercedes";
        cars[2][1] = "Skoda";
        cars[2][2] = scanner.nextLine();

        for(int i = 0;  i < 3; i++)
        {
            System.out.println();
            for(int j = 0;  j < 3; j++)
            {
                System.out.print(cars[i][j] + " ");
            }
        }

        //or
        System.out.println();

        String[][] cars2 = {{"Audi", "BMW","Honda"}, {"Ford", "Mazda", "Red Mazda"}, {"Mercedes", "Skoda", "Red Ford"}};

        for(int i = 0;  i < 3; i++)
        {
            System.out.println();
            for(int j = 0;  j < 3; j++)
            {
                System.out.print(cars[i][j] + " ");
            }
        }



    }
}
