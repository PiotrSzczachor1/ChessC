#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "move.h"

int main()
{
    int i=1;
    int *licznik = &i;
    char board[8][8]={{'W','S','G','K','Q','G','S','W'},

                      {'p','p','p','p','p','p','p','p'},

                      {' ',' ',' ',' ',' ',' ',' ',' '},

                      {' ',' ',' ',' ',' ',' ',' ',' '},

                      {' ',' ',' ',' ',' ',' ',' ',' '},

                      {' ',' ',' ',' ',' ',' ',' ',' '},

                      {'p','p','p','p','p','p','p','p'},

                      {'W','S','G','K','Q','G','S','W'}};
    //Black - 1, White - 2, Empty square - 0
    int hidden_board[8][8]={{1,1,1,1,1,1,1,1},
                            {1,1,1,1,1,1,1,1},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {2,2,2,2,2,2,2,2},
                            {2,2,2,2,2,2,2,2}};

    while(1)
    {
        drawing_board(board);
        move(licznik, board, hidden_board);
        drawing_board(board);
        move(licznik, board, hidden_board);
    }

    return 0;
}
