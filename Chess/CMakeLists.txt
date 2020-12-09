cmake_minimum_required(VERSION 3.17)
project(Chess C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Chess
        bishop_possible_moves.h
        board.h
        convert_letter_to_number.h
        convert_number_to_letter.h
        king_possible_moves.h
        knight_possible_moves.h
        main.c
        move.h
        pawn_possible_moves.h
        queen_possible_moves.h
        rook_possible_moves.h)
