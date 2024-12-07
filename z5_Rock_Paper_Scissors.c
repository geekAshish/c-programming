#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int a)
{
    srand(time(NULL)); // {srand takes time as input, so its value is always change}
    return rand() % a;
}

int main()
{
    // Genarat rondom number
    // srand(56); // srand takes seed as an input and is defined inside stdlib.h * which gives only one number *

    printf("The random number between 0 to 100 is %d\n", generateRandomNumber());

    return 0;
}

// Create Rock, Paper, Scissors Game ----------------------------------------
// Player 1: Rock
// Player 2 (Conputer): Scissors // Rock Wins

// Rock vs Paper --> Paper wins
// Rock vs Sciccors --> Rock wins
// Paper vs Sciccors --> Scissor wins

// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end

// -- Note: You have to display name of the player during the game. Take user name as an input from the user
