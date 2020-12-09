#include "convert_letter_to_number.h"
#include "convert_number_to_letter.h"
#include "rook_possible_moves.h"
#include "knight_possible_moves.h"
#include "pawn_possible_moves.h"
#include "king_possible_moves.h"
#include "bishop_possible_moves.h"
#include "queen_possible_moves.h"

void move(int *licznik, char board[8][8], int hidden_board[8][8])
{
    int b,c, move_column_int, move_row, choice=0;
    int *re_choice=&choice;
    char a, move_column;
    if(*licznik%2==1) //Sprawdzanie ktory gracz ma aktualnie ruch
    {
        one_more_choice_white:

        printf("Ruch koloru bialego: \n");
        printf("Wybierz wspolrzedna figury ktora chcesz sie ruszyc np. A5: ");
        scanf(" %c %d", &a, &b);
        c=convert_letter_to_number(a);

        //Wyswietlanie mozliwosci ruchu
        rook_possible_moves(hidden_board, board, b, c, 2, 1, re_choice); //ukryta plansza cyfr, plansza widoczna, wiersz, kolumna, kolor(2 - white, 1- black), kolor przeciwnika(2 - white, 1 - black)
        knight_possible_moves(hidden_board, board, b, c, 2, 1, re_choice);
        pawn_possible_moves(hidden_board, board, b, c, 2, 1, re_choice);
        king_possible_moves(hidden_board, board, b, c, 2, 1, re_choice);
        bishop_possible_moves(hidden_board, board, b, c, 2, 1, re_choice);
        queen_possible_moves(hidden_board, board, b, c, 2, 1, re_choice);

        //Sprawdzanie czy dana figura ma mozliwosc ruchu, jezeli nie to program wraca do wyboru figury ktora chcemy sie poruszyc
        if(*re_choice==0) //Jezeli wartosc re_choice jest rowna 0, to figura nie ma mozliwosci ruchu
        {
            printf("\nTa figura nie ma mozliwosci ruchu lub na danym polu nie ma figury.\nWybierz jeszcze raz:\n ");
            goto one_more_choice_white;
            *re_choice=0;
        }

        //Ruch
        printf("Podaj wspolrzedna na ktora chcesz sie poruszyc np. A5: ");
        scanf(" %c %d", &move_column, &move_row);
        move_column_int=convert_letter_to_number(move_column);
        board[move_row-1][move_column_int]=board[b-1][c]; //Zmiana pozycji figury na widocznej planszy
        hidden_board[move_row-1][move_column_int]=hidden_board[b-1][c]; //Zmiana pozycji figury na ukrytej planszy
        board[b-1][c]=' '; //Usuwanie starej pozycji figury
        hidden_board[b-1][c]=0; //Usuwanie starej pozyzji figury

    }
    else
    {
        one_more_choice_black:

        printf("Ruch koloru czarnego: \n");
        printf("Wybierz wspolrzedna figury ktora chcesz sie ruszyc np. A5: ");
        scanf(" %c %d", &a, &b);
        c=convert_letter_to_number(a);

        //Wyswietlanie mozliwosci ruchu
        rook_possible_moves(hidden_board, board, b, c, 1, 2, re_choice); //ukryta plansza cyfr, plansza widoczna, wiersz, kolumna, kolor(2 - white, 1- black), kolor przeciwnika(2 - white, 1 - black), sprawdzenie czy ruch jest mozliwy
        knight_possible_moves(hidden_board, board, b, c, 1, 2, re_choice);
        pawn_possible_moves(hidden_board, board, b, c, 1, 2, re_choice);
        king_possible_moves(hidden_board, board, b, c, 1, 2, re_choice);
        bishop_possible_moves(hidden_board, board, b, c, 1, 2, re_choice);
        queen_possible_moves(hidden_board, board, b, c, 1, 2, re_choice);

        if(*re_choice==0) //Jezeli wartosc re_choice jest rowna 0, to figura nie ma mozliwosci ruchu
        {
            printf("\nTa figura nie ma mozliwosci ruchu lub na danym polu nie ma figury.\nWybierz jeszcze raz:\n ");
            goto one_more_choice_black;
            *re_choice=0;
        }

        //Ruch
        printf("Podaj wspolrzedna na ktora chcesz sie poruszyc np. A5: ");
        scanf(" %c %d", &move_column, &move_row);
        move_column_int=convert_letter_to_number(move_column);
        board[move_row-1][move_column_int]=board[b-1][c]; //Zmiana pozycji figury na widocznej planszy
        hidden_board[move_row-1][move_column_int]=hidden_board[b-1][c]; //Zmiana pozycji figury na ukrytej planszy
        board[b-1][c]=' '; //Usuwanie starej pozycji figury
        hidden_board[b-1][c]=0; //Usuwanie starej pozyzji figury
    }
    *licznik=*licznik+1;
}

