void knight_possible_moves(int hidden_board[8][8], char board[8][8], int b, int c, int color, int enemy_color, int *re_choice)
{

    if(board[b-1][c]=='N'||board[b-1][c]=='n') //Ruchy skoczka (konia)
        {
            int undo=0;
            char kolumna; //c - kolumna, b - wiersz
            printf("Mozliwe ruchy: \n");
            printf("W prawo, gora: ");
            kolumna=convert_number_to_letter(c);

            if( ( (b-3)>=0 )&&( (c+1)<8 )&&( hidden_board[b-3][c+1]!=color ) ) //2 w gore jeden w prawo
            {
                undo=1;
                if(hidden_board[b-3][c+1]==enemy_color) //2 w gore jeden w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna+1, b-2); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d ",kolumna+1, b-2);
                }
            }
            if( ( (b-2)>=0 )&&( (c+2)<8 )&&( hidden_board[b-2][c+2]!=color ) ) //1 w gore 2 w prawo
            {
                undo=1;
                if(hidden_board[b-2][c+2]==enemy_color) //1 w gore 2 w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna+2, b-1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d ",kolumna+2, b-1);
                }
            }
            printf("\n");
            printf("W prawo, dol: ");
            if( ( b<8 )&&( (c+2)<8 )&&( hidden_board[b][c+2]!=color ) ) //1 w dol 2 w prawo
            {
                undo=1;
                if(hidden_board[b][c+2]==enemy_color) // 1 w dol 2 w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna+2, b+1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d ",kolumna+2, b+1);
                }

            }
            if( ( (b+1)<8)&&( (c+1)<8)&&(hidden_board[b+1][c+1]!=color) ) //2 w col 1 w prawo
            {
                undo=1;
                if(hidden_board[b+1][c+1]==enemy_color)
                {
                    printf("Mozliwe bicie: %c%d ", kolumna+1, b+2); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d ",kolumna+1, b+2);
                }

            }
            printf("\n");
            printf("w lewo, gora: ");
            if( ( (b-3)>=0 )&&( (c-1)>=0 )&&( hidden_board[b-3][c-1]!=color ) ) //2 w gore jeden w lewo
            {
                undo=1;
                if(hidden_board[b-3][c-1]==enemy_color) //2 w gore jeden w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna-1, b-2); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d ",kolumna-1, b-2);
                }
            }
            if( ( (b-2)>=0 )&&( (c-2)>=0 )&&( hidden_board[b-2][c-2]!=color ) ) //1 w gore 2 w lewo
            {
                undo=1;
                if(hidden_board[b-2][c-2]==enemy_color) //1 w gore 2 w lewo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna-2, b-1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d ",kolumna-2, b-1);
                }
            }
            printf("\n");
            printf("W prawo, dol: ");
            if( ( b<8 )&&( (c-2)>=0 )&&( hidden_board[b][c-2]!=color ) ) //1 w dol 2 w lewo
            {
                undo=1;
                if(hidden_board[b][c-2]==enemy_color) // 1 w dol 2 w lewo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna-2, b+1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d ",kolumna-2, b+1);
                }

            }
            if( ( (b+1)<8)&&( (c-1)>=0)&&(hidden_board[b+1][c-1]!=color) ) //2 w col 1 w lewo
            {
                undo=1;
                if(hidden_board[b+1][c-1]==enemy_color)
                {
                    printf("Mozliwe bicie: %c%d ", kolumna-1, b+2); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d ",kolumna-1, b+2);
                }

            }
            printf("\n");

            *re_choice=undo; //Jezeli istnieje jakakolwiek opcja ruchu to undo przyjmie wartosc 1
        }

}

