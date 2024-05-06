#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 7;
    int guess;
    int guessCount = 4;
    int guesses = 1;

    scanf("%d", &guess);
    while(guess != num  && guesses < guessCount)
    {
        printf("Wrong\n");
        guesses++;
        scanf("%d", &guess);
    }

    if(guess == num)
    {
        printf("Correct");
    }
    else {
        printf("Wrong\n");
        printf("Try Again");
    }




    return 0;
}
