void rook_possible_moves(int hidden_board[8][8], char board[8][8], int b, int c, int color, int enemy_color)
{
    if(board[b-1][c]=='W') //Ruchy wiezy
        {
            char kolumna;
            int d=c, e=b, zmiana_figury;
            printf("Mozliwe ruchy: \n");
            printf("W prawo: ");
            while(hidden_board[b-1][c+1]!=color&&( (c+1)<=7) )  //Dopoki wieza idac w prawo nie wyjdzie poza plansze lub nie napotka figury swojego koloru wypisuj mozliwosci ruchu wiezy w prawo
            {
                kolumna=convert_number_to_letter(c);
                if(hidden_board[b-1][c+1]==enemy_color)
                {
                    printf("Mozliwe bicie: %c%d", kolumna+1, b);
                    break;
                }
                printf("%c%d ", kolumna+1, b);
                c++;
            }
            printf("\n");
            printf("W lewo: ");
            c=d; //Przywracamy wartosc wpisana przez uzytkownika do c
            while(hidden_board[b-1][c-1]!=color&&( (c-1)>=0) )
            {
                kolumna=convert_number_to_letter(c);
                if(hidden_board[b-1][c-1]==enemy_color)
                {
                    printf("Mozliwe bicie: %c%d", kolumna-1, b);
                    break;
                }
                printf("%c%d ", kolumna-1, b);
                c--;
            }

            printf("\n");
            printf("W gore: ");
            c=d; //Przywracamy wartosc wpisana przez uzytkownika do c
            b=e; //Przywracamy wartosc wpisana przez uzytkownika do b
            while(hidden_board[b-2][c]!=color&&b-2>=0) //b-2 zeby nie sprawdzal swojego pola bo ono napewno ma wartosc 2(w koncu on sam na nim stoi)
            {
                kolumna=convert_number_to_letter(c);
                if(hidden_board[b-2][c]==enemy_color)
                {
                    printf("Mozliwe bicie: %c%d", kolumna, b-1);
                    break;
                }
                printf("%c%d ", kolumna, b-1); //Wroc do wypisywania pozycji w gore     Wrocilismy do b-1 zamiast b-2, zeby liczyl od 1 a nie od 0
                b--;
            }
            printf("\n");
            printf("W dol: ");
            b=e; //Przywracamy wartosc wpisana przez uzytkownika do b
            while(hidden_board[b][c]!=color&&b<=7) //b bo sprawdzamy pole nizej pionka a nie to na ktorym stoi
            {
                kolumna=convert_number_to_letter(c);
                if(hidden_board[b][c]==enemy_color)
                {
                        printf("Mozliwe bicie: %c%d\n", kolumna, b+1);
                        break;
                }
                printf("%c%d ", kolumna, b+1);
                b++;
            }
            printf("\n");
            b=e;

        }
}
