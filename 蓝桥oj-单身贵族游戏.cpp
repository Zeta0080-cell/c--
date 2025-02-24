#include <stdio.h>
#include <string.h>

int GameBoard[7][7] = {0};
char GP[8];
int key = 0;

int main()
{
    for (int row=0; row<7;row++)
    {
        scanf("%s",&GP);
        if (strlen(GP) < 4)
        {
            GameBoard[row][0] = 2;
            GameBoard[row][1] = 2;
            for (int colu = 0; colu < 3; colu++)
            {
                GameBoard[row][colu+2] = GP[colu] - '0';
            }
            GameBoard[row][5] = 2;
            GameBoard[row][6] = 2;
        }
        else
        {
            for (int colu=0; colu<7; colu++)
            {
                GameBoard[row][colu] = GP[colu] - '0';
            }
        }
    }
    for (int row=0; row<7;row++)
    {
        for (int colu=0; colu<7; colu++)
        {
            if (GameBoard[row][colu] == 1)
            {
                if ((colu>1) && (GameBoard[row][colu-1]==1) && (GameBoard[row][colu-2]==0)) key = 1;
                if ((colu<5) && (GameBoard[row][colu+1]==1) && (GameBoard[row][colu+2]==0)) key = 1;
                if ((row>1) && (GameBoard[row-1][colu]==1) && (GameBoard[row-2][colu]==0)) key = 1;
                if ((row<5) && (GameBoard[row+1][colu]==1) && (GameBoard[row+2][colu]==0)) key = 1;
            }
        }
    }
    if (key) printf("no");
    else printf("yes");
    return 0;
}
