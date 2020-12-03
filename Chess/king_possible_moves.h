void king_possible_moves(int hidden_board[8][8], char board[8][8], int b, int c, int color, int enemy_color)
{
    if(board[b-1][c]=='K') //Ruchy krola
    {
            char kolumna; //c - kolumna, b - wiersz
            printf("Mozliwe ruchy: \n");
            kolumna=convert_number_to_letter(c);

            //Ruch w gore
            if( ( (b-2)>=0 ) && ( hidden_board[b-2][c]!=color ) ) //1 w gore
            {
                if(hidden_board[b-2][c]==enemy_color) //2 w gore jeden w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna, b-1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                    printf("\n");
                }
                else
                {
                    printf("W gore: %c%d",kolumna, b-1);
                    printf("\n");
                }
            }

            //Ruch w prawo, góra
            if( ( (b-2)>=0 ) && (c+1)<=7 && ( hidden_board[b-2][c+1]!=color ) ) //1 w gore 1 w prawo
            {
                if(hidden_board[b-2][c+1]==enemy_color) //1 w gore 1 w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna+1, b-1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                    printf("\n");
                }
                else
                {
                    printf("W prawo, gora: %c%d",kolumna+1, b-1);
                    printf("\n");
                }
            }

                        //Ruch w prawo
            if( (c+1)<=7 && ( hidden_board[b-1][c+1]!=color ) ) //1 w prawo
            {
                if(hidden_board[b-1][c+1]==enemy_color) //1 w gore 1 w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna+1, b); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                    printf("\n");
                }
                else
                {
                    printf("W prawo: %c%d",kolumna+1, b);
                    printf("\n");
                }
            }


            //Ruch w prawo, dol
            if( ( b<=7 ) && (c+1)<=7 && ( hidden_board[b][c+1]!=color ) ) //1 w gore 1 w prawo
            {
                if(hidden_board[b][c+1]==enemy_color) //1 w gore 1 w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna+1, b+1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                    printf("\n");
                }
                else
                {
                    printf("W prawo, dol: %c%d",kolumna+1, b+1);
                    printf("\n");
                }
            }

            //Ruch w dol
            if( ( b<=7 ) && ( hidden_board[b][c]!=color ) ) //1 w gore
            {
                if(hidden_board[b][c]==enemy_color) //2 w gore jeden w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna, b+1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                    printf("\n");
                }
                else
                {
                    printf("W dol: %c%d",kolumna, b+1);
                    printf("\n");
                }
            }

                        //Ruch w lewo, dol
            if( ( b<=7 ) && (c-1)>=0 && ( hidden_board[b][c-1]!=color ) ) //1 w gore 1 w prawo
            {
                if(hidden_board[b][c-1]==enemy_color) //1 w gore 1 w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna-1, b+1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                    printf("\n");
                }
                else
                {
                    printf("W lewo, dol: %c%d",kolumna-1, b+1);
                    printf("\n");
                }
            }

            //Ruch w lewo
            if( (c-1)>=0 && ( hidden_board[b-1][c-1]!=color ) ) //1 w prawo
            {
                if(hidden_board[b-1][c-1]==enemy_color) //1 w gore 1 w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna+1, b); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                    printf("\n");
                }
                else
                {
                    printf("W lewo: %c%d",kolumna-1, b);
                    printf("\n");
                }
            }

            //Ruch w lewo, góra
            if( ( (b-2)>=0 ) && (c-1)>=0 && ( hidden_board[b-2][c-1]!=color ) ) //1 w gore 1 w prawo
            {
                if(hidden_board[b-2][c-1]==enemy_color) //1 w gore 1 w prawo
                {
                    printf("Mozliwe bicie: %c%d ", kolumna-1, b-1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                    printf("\n");
                }
                else
                {
                    printf("W lewo, gora: %c%d",kolumna-1, b-1);
                    printf("\n");
                }
            }


    }
}
