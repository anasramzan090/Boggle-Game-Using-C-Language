/*This Program is a Boggle Game. It's a word making game. A six-sided die has  six different alphabets on each side. There  are 16 such dice on a 4x4 board. The dice are  shuffled and are seen from the top. The 
player has one minute to make as many  words from the top view as possible. He will  get points for all characters in those words. 
The alphabets on 16 dice will be  loaded from a text file every time. You  can assume that user will enter valid  words but better can be if words  made by player are compared with 
some huge list of valid words. Best score with player detail and day/time must be saved.
*/

// Libraries included in the project
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 //Global Points declaration
int points = 0;  
int temp = 300;
// Function Definition To read the Libraries/Dictioneries Added.
void viewer(int letterview)
{
    FILE *fp;
    int word = 0;
    int temp = 300;
    char find[30];
    for (int t = 0; t <= 60; t = clock() / CLOCKS_PER_SEC)
    {
        printf("\tEnter your word:");
        printf("\n\n");
        scanf("%s", find);
        char line[temp];
        switch (letterview)
        {
        case 1:
            fp = fopen("library_1.txt", "r");
            break;
        case 2:
            fp = fopen("library_2.txt", "r");
            break;
        case 3:
            fp = fopen("library_3.txt", "r");
            break;
        case 4:
            fp = fopen("library_4.txt", "r");
            break;
        case 5:
            fp = fopen("library_5.txt", "r");
            break;
        case 6:
            fp = fopen("library_6.txt", "r");
            break;
            case 7:
            fp = fopen("library_7.txt", "r");
            break;
        case 8:
            fp = fopen("library_8.txt", "r");
            break;
        case 9:
            fp = fopen("library_9.txt", "r");
            break;
        case 10:
            fp = fopen("library_10.txt", "r");
            break;
            
        }

        while (fgets(line,temp,fp))
        {
            char *pointer = strstr(line, find);
            if (pointer != NULL)
            {
                word = 1;
                break;
            }
        }
        fclose(fp);
        if (word == 1)
        {
            printf("Congrats!!!\nYou Entered A Valid Word.\n");
            printf("Continue To Explore Words!!!\n");
            points++;
        }
        else
        {
            printf("\nTHAT WAS A WRONG ENTRY!!!\n ");
            printf("Good Luck, Try again\n ");
        }
    }
}
// Function Declaration For the Generation Of a rendum Number to select the array for board
int generaterandnum(int lower, int upper, int count)
{
    int x;
    int num;
    for (x = 0; x < count; x++)
    {
        num = (rand() % (upper - lower + 1)) + lower;
        printf("%d\n ", num);
    }
    return num;
}

// Main Function Starts from here.
int main()
{
    int mint = 1, sec = 0, ms = 0; 
    printf("\n \n\n\nBoard:  ");
    char array_1[4][4] = {{'G', 'I', 'L', 'B'}, {'A', 'D', 'E', 'R'}, {'N', 'V', 'W', 'S'}, {'B', 'E', 'I', 'J'}};
    char array_2[4][4] = {{'A', 'R', 'K', 'E'}, {'L', 'O', 'T', 'N'}, {'S', 'V', 'I', 'D'}, {'P', 'E', 'B', 'A'}};
    char array_3[4][4] = {{'E', 'I', 'L', 'E'}, {'Z', 'A', 'B', 'N'}, {'S', 'V', 'O', 'D'}, {'T', 'E', 'R', 'A'}};
    char array_4[4][4] = {{'H', 'D', 'E', 'I'}, {'N', 'A', 'R', 'F'}, {'S', 'O', 'P', 'U'}, {'W', 'P', 'Y', 'L'}};
    char array_5[4][4] = {{'F', 'B', 'L', 'P'}, {'R', 'I', 'E', 'A'}, {'G', 'M', 'N', 'D'}, {'H', 'T', 'S', 'U'}};
    char array_6[4][4] = {{'T', 'A', 'P', 'O'}, {'E', 'N', 'E', 'R'}, {'D', 'S', 'T', 'A'}, {'I', 'G', 'H', 'C'}};
    char array_7[4][4] = {{'E', 'R', 'T', 'E'}, {'N', 'I', 'A', 'N'}, {'S', 'P', 'F', 'V'}, {'O', 'L', 'E', 'A'}};
    char array_8[4][4] = {{'J', 'U', 'O', 'K'}, {'A', 'R', 'K', 'E'}, {'S', 'T', 'N', 'R'}, {'P', 'E', 'I', 'T'}};
    char array_9[4][4] = {{'D', 'G', 'H', 'I'}, {'K', 'L', 'P', 'S'}, {'Y', 'E', 'U', 'T'}, {'E', 'O', 'R', 'N'}};
    char array_10[4][4] = {{'M', 'A', 'P', 'O'}, {'E', 'T', 'E', 'R'}, {'D', 'E', 'N', 'I'}, {'L', 'D', 'H', 'C'}};

    srand(time(NULL)); 
    int num = generaterandnum(1, 10, 1);
    printf("%c\n",num);
    // switch statements to print the bboard on screen by using the randum number.
    switch (num)
    {
    case 1:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("\n\n\t\t\t| %c ", array_1[i][j]);
            }
            printf("|\n\t\t\t\t\t\t=================\n");
        }
        viewer(num);
        break;

    case 2:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("\t\t\t\t\t\t| %c ", array_2[i][j]);
            }
            printf("\t\t\t\t\t\t|\n=================\n");
        }
        viewer(num);
        break;

    case 3:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("\t\t\t\t\t\t| %c ", array_3[i][j]);
            }
            printf("|\n\t\t\t\t\t\t=================\n");
        }
        viewer(num);
        break;

    case 4:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("| %c ", array_4[i][j]);
            }
            printf("|\n=================\n");
        }
        viewer(num);
        break;

    case 5:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("| %c ", array_5[i][j]);
            }
            printf("|\n=================\n");
        }
        viewer(num);
        break;

    case 6:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("| %c ", array_6[i][j]);
            }
            printf("|\n=================\n");
        }
        viewer(num);
        break;

    case 7:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("| %c ", array_7[i][j]);
            }
            printf("|\n=================\n");
        }
        viewer(num);
        break;

    case 8:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("| %c ", array_8[i][j]);
            }
            printf("|\n=================\n");
        }
        viewer(num);
        break;

    case 9:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("| %c ", array_9[i][j]);
            }
            printf("|\n=================\n");
        }
        viewer(num);
        break;

    case 10:
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("| %c ", array_10[i][j]);
            }
            printf("|\n=================\n");
        }
        viewer(num);
        break;
    default:
        printf("WRONG ENTRY!!! ");
        break;
    }
    printf("YOU GOT %d POINTS IN THIS GAME. \n", points);
    return 0;
}
// End of the Program...!