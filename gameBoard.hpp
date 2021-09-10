//
//  gameBoard.hpp
//
//  Created by Adam Abernathy on sept 8 2021
//  Copyright © 2021 Adam Abernathy. All rights reserved.
//
// game board for battleship game
//
//

#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP

#include "myDefines.h"

using namespace std;

class GameBoard {

private:
    //TODO: may not need winner, reason no setter or getter
    bool winner; //tracks if there is a winning condition
    int num_rows;//number of board rows
    int num_col; //number of board columns
    int num_ships; //number of ships used in game
   //will hold the state of the current board
    //TODO: need to make arry max size or dynamic
    //made max for testing
    //row then columns
    char board_arr[9][10];
    

public:
    /*MARK: Constructors*/
    /** default constructor
     @pre none
     @post GameBoard object */
    GameBoard();

    /** with param
    @pre none
    @post object with speciviced params
    @param row - number of rows
    @param col - number of columns
    @param ships - number of ships in game */
    GameBoard(int row, int col, int ships);

    /*MARK: Setters*/
    /** set number of rows
    @pre none
    @post num_row is set to passed value
    @param row # of rows for map */
    void set_rows(int row);

    /** set number of columns
    @pre none
    @post num_col is set to passed value
    @param col # of columns */
    void set_col(int col);

    /** set number of ships
    @pre none
    @post num_ships is set to passed value
    @param ship # of columns */
    void set_ships(int ship);

    /*MARK: Getters*/
    /** return num of rows
     @pre none
     @post none
     @return the set num of rows */
    int get_rows() const;

    /** return num of columns
     @pre none
     @post none
     @return num of columns */
    int get_col() const;

    /** return num of ships
     @pre none
     @post none
     @return num of ships */
    int get_ships() const;


    /*MARK: Methods*/
    
    /** prints the game boar
    @pre class object with rows and columns
    @post board printed on screen */
    void printBoard();

    /** prints the instructions
    @pre none
    @post none */
    void printInstructions();

    /** prints the legend
    @pre none
    @post none*/
    void printLegend();

    //TODO: may nix
    /** prints the position and current value with the border
     @pre a board array
     @post none */
    void printSquare();
    
    /** fills an array with all ? which will be the starting board
     @pre none
     @post none */
    void fill_empty(char *arr[]);
    
    /** prints the row header
     @pre none
     @post none */
    void printHeader(char *arr[]);
};

#endif /* GAMEBOARD_HPP */
