/*Create Rock, Paper, scissors Game
player 1: user
player 2: computer
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GenerateRandom(char n)
{
    srand(time(NULL)); // srand is input seed build inside stdlib.h
    return rand() % n; // rand()%variable use for random selection
}

int Greater(char char1, char char2)
{
    // For rock paper scissors - return 1 if c1<c2 and 0 otherwise. If c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock ,Paper , Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player's 1 input
        printf("Player 1's Turn:\n");
        printf("Choose 1 for Rock ,2 for Paper and 3 for scissors\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        // Generate computer input
        printf("Computer's Turn:\n");
        printf("Choose 1 for Rock ,2 for Paper and 3 for scissors\n");
        temp = GenerateRandom(3) + 1;
        compChar = dict[temp - 1];
        printf("Computer choose %c\n\n", compChar);

        // Compare the score of Computer and player
        if (Greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("Computer got it!\n\n");
        }
        else if ((compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("It's draw!\n\n");
        }
        else
        {
            playerScore += 1;
            printf("You got it!\n\n");
        }
        printf("Your Score: %d\nComputer Score: %d\n",playerScore,compScore);
    }
    if (playerScore > compScore)
    {
        printf("You Win this game.\n");
    }
    else if(playerScore < compScore){
        printf("Computer win this game.\n");
    }
    else{
        printf("Match Draw.\n");
    }
    return 0;
}