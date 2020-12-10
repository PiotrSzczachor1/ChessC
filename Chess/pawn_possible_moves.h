void pawn_possible_moves(int hidden_board[8][8], char board[8][8], int b, int c, int color, int enemy_color, int *re_choice)
{

        if(board[b-1][c]=='P'||board[b-1][c]=='p') //Ruchy pionka
        {
            int undo=0;
            char kolumna; //c - kolumna, b - wiersz
            printf("Mozliwe ruchy: ");
            kolumna=convert_number_to_letter(c);

            //Ruch bialego pionka
            if(color==2)
            {

                //Ruch z pozycji startowej
                if((b-1)==6 && hidden_board[b-2][c]!=color && hidden_board[b-2][c]!=enemy_color)
                {
                    undo=1;
                    printf("%c%d ", kolumna, b-1);
                    if(hidden_board[b-3][c]!=color&&hidden_board[b-3][c]!=enemy_color)
                    {
                        undo=1;
                        printf("%c%d ", kolumna, b-2);
                    }
                    printf("\n");
                }

                //Normalny ruch
                if((b-1!=6)&&(b-2)>=0&&hidden_board[b-2][c]!=color && hidden_board[b-2][c]!=enemy_color)
                {
                    undo=1;
                    printf("%c%d", kolumna, b-1);
                    printf("\n");
                }

                //Bicie w lewo
                if(hidden_board[b-2][c-1]==enemy_color)
                {
                    undo=1;
                    printf("Mozliwe bicie: %c%d", kolumna-1, b-1);
                    printf("\n");
                }

                //Bicie w prawo
                if(hidden_board[b-2][c+1]==enemy_color)
                {
                    undo=1;
                    printf("Mozliwe bicie: %c%d", kolumna+1, b-1);
                    printf("\n");
                }

            }

            //Ruch czarnego pionka
            if(color==1)
            {

                //Ruch z pozycji startowej
                if((b-1)==1 && hidden_board[b][c]!=color && hidden_board[b][c]!=enemy_color)
                {
                    undo=1;
                    printf("%c%d ", kolumna, b+1);
                    if(hidden_board[b+1][c]!=color&&hidden_board[b+1][c]!=enemy_color)
                    {
                        undo=1;
                        printf("%c%d ", kolumna, b+2);
                    }
                    printf("\n");
                }

                //Normalny ruch
                if((b-1!=1)&&(b-1)<=7&&hidden_board[b+1][c]!=color && hidden_board[b+1][c]!=enemy_color)
                {
                    undo=1;
                    printf("%c%d", kolumna, b+2);
                    printf("\n");
                }

                //Bicie w lewo

                if(hidden_board[b][c-1]==enemy_color)
                {
                    undo=1;
                    printf("Mozliwe bicie: %c%d", kolumna-1, b+1);
                    printf("\n");
                }

                //Bicie w prawo

                if(hidden_board[b][c+1]==enemy_color)
                {
                    undo=1;
                    printf("Mozliwe bicie: %c%d", kolumna+1, b+1);
                    printf("\n");
                }
            }

            *re_choice=undo; //Jezeli istnieje jakakolwiek opcja ruchu to undo przyjmie wartosc 1

        }


}

