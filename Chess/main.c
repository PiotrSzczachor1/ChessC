#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "move.h"
#include "int_board.h"

int main()
{
    int i=1;
    int *licznik = &i;
    char board[8][8]={{'R','N','B','K','Q','B','N','R'},

                      {'P','P','P','P','P','P','P','P'},

                      {' ',' ',' ',' ',' ',' ',' ',' '},

                      {' ',' ',' ',' ',' ',' ',' ',' '},

                      {' ',' ',' ',' ',' ',' ',' ',' '},

                      {' ',' ',' ',' ',' ',' ',' ',' '},

                      {'p','p','p','p','p','p','p','p'},

                      {'r','n','b','k','q','b','n','r'}};
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
        //drawing_int_board(hidden_board);
        drawing_board(board);
        move(licznik, board, hidden_board);
        //drawing_int_board(hidden_board);
        drawing_board(board);
        move(licznik, board, hidden_board);
    }

    return 0;
}
