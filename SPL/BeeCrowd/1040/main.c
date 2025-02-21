/*#include <stdio.h>
#include <stdlib.h>

int main()
{  float n1,n2,n3,n4,avg1=0,avg2=0,avg3=0,final_score;

scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
avg1=(n1+n2+n3+n4)/4;
    printf("Media:%.1f\n",avg1);
    if(avg1>7)
    {
        printf("Aluno aprovado.\n");
    }
       else  if(avg1<5)
    {
        printf("Aluno reprovado\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&final_score);
        printf("Nota do exame: %.1f\n",final_score);

    }
    avg2=(avg1+final_score)/2;
    if(avg2>5)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg2<=4.9)
    {
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",avg2);
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define WALL '%'
#define TREASURE '$'
#define EMPTY ' '
#define PLAYER '@'

// Function to initialize the maze
void initializeMaze(char maze[ROWS][COLS]) {
    // Fill the maze with empty spaces
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            maze[i][j] = EMPTY;
        }
    }

    // Place walls
    for (int i = 0; i < ROWS; i++) {
        maze[i][0] = WALL;
        maze[i][COLS - 1] = WALL;
    }
    for (int j = 0; j < COLS; j++) {
        maze[0][j] = WALL;
        maze[ROWS - 1][j] = WALL;
    }

    // Place treasure
    srand(time(NULL));
    int treasureRow = rand() % (ROWS - 2) + 1;
    int treasureCol = rand() % (COLS - 2) + 1;
    maze[treasureRow][treasureCol] = TREASURE;
}

// Function to print the maze
void printMaze(char maze[ROWS][COLS], int playerRow, int playerCol) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == playerRow && j == playerCol) {
                printf("%c ", PLAYER);
            } else {
                printf("%c ", maze[i][j]);
            }
        }
        printf("\n");
    }
}

// Function to check if the player won
bool checkWin(char maze[ROWS][COLS], int playerRow, int playerCol) {
    return maze[playerRow][playerCol] == TREASURE;
}

int main() {
    char maze[ROWS][COLS];
    int playerRow = 1;
    int playerCol = 1;
    char move;

    initializeMaze(maze);

    while (true) {
        // Print maze
        printMaze(maze, playerRow, playerCol);

        // Check for win
        if (checkWin(maze, playerRow, playerCol)) {
            printf("Congratulations! You found the treasure!\n");
            break;
        }

        // Get player move
        printf("Enter move (W/A/S/D): ");
        scanf(" %c", &move);

        // Update player position based on move
        switch (move) {
            case 'W':
            case 'w':
                if (maze[playerRow - 1][playerCol] != WALL) {
                    playerRow--;
                }
                break;
            case 'A':
            case 'a':
                if (maze[playerRow][playerCol - 1] != WALL) {
                    playerCol--;
                }
                break;
            case 'S':
            case 's':
                if (maze[playerRow + 1][playerCol] != WALL) {
                    playerRow++;
                }
                break;
            case 'D':
            case 'd':
                if (maze[playerRow][playerCol + 1] != WALL) {
                    playerCol++;
                }
                break;
            default:
                printf("Invalid move. Please enter W/A/S/D.\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,r,temp,rev=0,odd=2,even=1;


    scanf("%d",&n);
    temp=n;
    for(i=1 ; i<=temp; i++)
    {
        r=temp%10;
        rev=rev*10+r;
        if(rev%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        temp=temp/10;
    }
    if(rev==n)
        printf("%d palindrome   ",rev);
    else
        printf("%d not palindrome ",rev);

   if(even==i)
    printf("even");
 else if(odd==i)
    printf ("odd");
    else
        printf("  neither odd or even");

return 0;
}
*/

#include<stdio.h>

int main()
{
    char ch;
    int i,shift_value;


    printf("Message :");

    while ((ch!= '\n')
    {
        //  printf("\nEnter %d character : ",i);
        scanf(" %c",&ch);
        if(i==1)
        {
           printf("Shift value:");
    scanf("%d",&shift_value);
        }
        if(ch=='  ')
            printf("%c",ch);
        if(ch>='D' )

            printf("%c",ch-shift_value);

    }
    return 0;
}
