#include <bits/stdc++.h>
using namespace std;
#define Computer 1
#define Human 2
#define Side 3
#define Computermove 'O'
#define Humanmove 'X'
void showboard(char board[][Side])
printf("\n\n");
printf("\t\t\t  %c | %c | %c"\n",board[0][0],board[0][1],board[0][2]);
printf("\t\t\t--------------\n");
printf("\t\t\t  %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
printf("\t\t\t--------------\n");
printf("\t\t\t  %c | %c | %C\n",board[2][0],board[2][1],board[2][2]);
return 0;}
void showinstructions()
{

    printf("\t\t\t 1 | 2 | 3 \n");
    printf("\t\t\t-------------\n");
    printf("\t\t\t 4 | 5 | 6 \n");
    printf("\t\t\t-------------\n");
    printf("\t\t\t 5 | 6 | 7 \n");
    printf("\n - \t-\t-\t-\t-\t-\t-\t-\n");
    return 0;

}
void initialise(char board[][Side],int moves[])
{

    srand(time(NULL));
    int i=0,j=0;
    for(i=0;i<Side;i++)
    {
        for(j=0;i<Side;j++)
        {
            board[i][j] = ' ';

        }
    }

}
