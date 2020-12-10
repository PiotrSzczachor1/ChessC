void bishop_possible_moves(int hidden_board[8][8], char board[8][8], int b, int c, int color, int enemy_color, int *re_choice)
{

    if(board[b-1][c]=='B'||board[b-1][c]=='b')
        {
            int undo=0;
            char kolumna;
            int d=c, e=b;
            printf("Mozliwe ruchy: \n");
            printf("W prawo, gora: ");

            //Petla wypisujaca mozliwosci ruchu po prawej gornej przekatnej
            while(hidden_board[b-2][c+1]!=color&&c+1<=7&&b>=0) //Dopoki wieza idac w prawo nie wyjdzie poza plansze lub nie napotka figury swojego koloru wypisuj mozliwosci ruchu wiezy w prawo
            {
                undo=1;
                kolumna=convert_number_to_letter(c);
                if(hidden_board[b-2][c+1]==enemy_color)
                {
                    printf("Mozliwe bicie: %c%d", kolumna+1, b-1);
                    break;
                }
                printf("%c%d ", kolumna+1, b-1);
                c++;
                b--;
            }

            printf("\n");
            c=d; //Przywracamy wartosc wpisana przez uzytkownika do c
            b=e; //Przywracamy wartosc wpisana przez uzytkownika do b
            printf("W prawo, dol: ");

            //Petla wypisujaca mozliwosci ruchu po prawej dolnej przekatnej
            while(hidden_board[b][c+1]!=color&&c+1<=7&&b<=7) //Dopoki wieza idac w prawo nie wyjdzie poza plansze lub nie napotka figury swojego koloru wypisuj mozliwosci ruchu wiezy w prawo
            {
                undo=1;
                kolumna=convert_number_to_letter(c);
                if(hidden_board[b][c+1]==enemy_color)
                {
                    printf("Mozliwe bicie: %c%d", kolumna+1, b+1);
                    break;
                }
                printf("%c%d ", kolumna+1, b+1);
                c++;
                b++;
            }

            printf("\n");
            c=d; //Przywracamy wartosc wpisana przez uzytkownika do c
            b=e; //Przywracamy wartosc wpisana przez uzytkownika do b
            printf("W lewo, dol: ");

            //Petla wypisujaca mozliwosci ruchu po lewej dolnej przekatnej
            while(hidden_board[b][c-1]!=color&&c-1>=0&&b<=7) //Dopoki wieza idac w prawo nie wyjdzie poza plansze lub nie napotka figury swojego koloru wypisuj mozliwosci ruchu wiezy w prawo
            {
                undo=1;
                kolumna=convert_number_to_letter(c);
                if(hidden_board[b][c-1]==enemy_color)
                {
                    printf("Mozliwe bicie: %c%d", kolumna-1, b+1);
                    break;
                }
                printf("%c%d ", kolumna-1, b+1);
                c--;
                b++;
            }

            printf("\n");
            c=d; //Przywracamy wartosc wpisana przez uzytkownika do c
            b=e; //Przywracamy wartosc wpisana przez uzytkownika do b
            printf("W lewo, gora: ");

            //Petla wypisujaca mozliwosci ruchu po lewej gornej przekatnej
            while(hidden_board[b-2][c-1]!=color&&c-1>=0&&b>=0) //Dopoki wieza idac w prawo nie wyjdzie poza plansze lub nie napotka figury swojego koloru wypisuj mozliwosci ruchu wiezy w prawo
            {
                undo=1;
                kolumna=convert_number_to_letter(c);
                if(hidden_board[b-2][c-1]==enemy_color)
                {
                    printf("Mozliwe bicie: %c%d", kolumna-1, b-1);
                    break;
                }
                printf("%c%d ", kolumna-1, b-1);
                c--;
                b--;
            }
            b=e;
            c=d;

            *re_choice=undo; //Jezeli istnieje jakakolwiek opcja ruchu to undo przyjmie wartosc 1

        }
}

