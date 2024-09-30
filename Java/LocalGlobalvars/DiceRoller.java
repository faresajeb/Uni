package LocalGlobalvars;

import java.util.Random;

public class DiceRoller {

    Random random = new Random();//Global
    int number;//Global

    DiceRoller(){
        roll();
    }
    void roll(){
        number = random.nextInt(6) + 1;
        System.out.println(number);
    }



    /*DiceRoller(){
        Random random = new Random();//Local
        int number = 0;//Local
        roll(random, number);
    }
    void roll(Random random, int number){
        number = random.nextInt(6) + 1;
        System.out.println(number);
    }*/
}
