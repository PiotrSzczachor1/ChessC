void drawing_board(char board[8][8])
{
    //Drawing board
    printf("   ---------------------------------\n");
    for(int i=0, row=1; i<8; i++, row++)
    {
    printf("%d  ", row);
        for(int j=0; j<8; j++)
        {
            printf("| %c ", board[i][j]);
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
