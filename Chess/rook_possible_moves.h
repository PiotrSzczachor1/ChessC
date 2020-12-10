void rook_possible_moves(int hidden_board[8][8], char board[8][8], int b, int c, int color, int enemy_color, int *re_choice)
{

    if(board[b-1][c]=='R'||board[b-1][c]=='r') //Ruchy wiezy
        {
            int undo=0;
            char kolumna;
            int d=c, e=b;
            printf("Mozliwe ruchy: \n");
            printf("W prawo: ");

            //Ruchy w prawo
            while(hidden_board[b-1][c+1]!=color&&( (c+1)<=7) )  //Dopoki wieza idac w prawo nie wyjdzie poza plansze lub nie napotka figury swojego koloru wypisuj mozliwosci ruchu wiezy w prawo
            {
                undo=1;
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
            b=e; //Przywracamy wartosc wpisana przez uzytkownika do b

            //Ruchy w lewo
            while(hidden_board[b-1][c-1]!=color&&( (c-1)>=0) )
            {
                undo=1;
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

            //Ruchy w gore
            while(hidden_board[b-2][c]!=color&&b-2>=0) //b-2 zeby nie sprawdzal swojego pola bo ono napewno ma wartosc 2(w koncu on sam na nim stoi)
            {
                undo=1;
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
            c=d; //Przywracamy wartosc wpisana przez uzytkownika do c
            b=e; //Przywracamy wartosc wpisana przez uzytkownika do b

            //Ruchy w dol
            while(hidden_board[b][c]!=color&&b<=7) //b bo sprawdzamy pole nizej pionka a nie to na ktorym stoi
            {
                undo=1;
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
            c=d; //Przywracamy wartosc wpisana przez uzytkownika do c
            b=e; //Przywracamy wartosc wpisana przez uzytkownika do b

            *re_choice=undo; //Jezeli istnieje jakakolwiek opcja ruchu to undo przyjmie wartosc 1

        }
}
