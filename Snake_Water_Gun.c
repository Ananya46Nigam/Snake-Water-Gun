#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char me, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // ss
    // gg
    // ww
    if (me == comp)
    {
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // sg
    // gs
    // sw
    // ws
    // gw
    // wg

    if (me == 's' && comp == 'g')
    {
        return -1;
    }
    else if (me == 'g' && comp == 's')
    {
        return 1;
    }

    if (me == 's' && comp == 'w')
    {
        return 1;
    }
    else if (me == 'w' && comp == 's')
    {
        return -1;
    }

    if (me == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (me == 'w' && comp == 'g')
    {
        return 1;
    }
}
int main()
{
    printf("\n\n****Let's Play !! Snake Water Gun ****\n");
    // A way to generate random choice of computer
    char me, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("\n****Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &me);
    int result = snakeWaterGun(me, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", me, comp);
    return 0;
}