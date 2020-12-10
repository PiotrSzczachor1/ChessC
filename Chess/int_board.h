//
// Created by Piotr on 10.12.2020.
//

#ifndef CHESS_INT_BOARD_H
#define CHESS_INT_BOARD_H

#endif //CHESS_INT_BOARD_H

void drawing_int_board(int board[8][8])
{
    //Drawing board
    printf("   ---------------------------------\n");
    for(int i=0, row=1; i<8; i++, row++)
    {
        printf("%d  ", row);
        for(int j=0; j<8; j++)
        {
            printf("| %d ", board[i][j]);
        }

        printf("|");
        printf("\n");
        printf("   ---------------------------------\n");
    }
    printf("\n   ");
    for(char column='A'; column<='H'; column++)
    {
        printf("  %c ", column);
    }
    printf("\n");
}

