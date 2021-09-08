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

#include <string>
#include <iostream>
#include <stdio.h>
#include <stdexcept>
// #include "myDefines.h"

using namespace std;

class GameBoard {

private:
    int num_rows;//number of board rows
    int num_col; //number of board columns
    int num_ships; //number of ships used in game

public:
    /*MARK: Constructors*/
    //default
    GameBoard();

    /** with param
    @pre none
    @post object with speciviced params
    @param row - number of rows
    @param col - number of columns
    @param ships - number of ships in game */
    GameBoard(int row, int col, int ships);

    //destructor
    ~GameBoard();

    /*MARK: Setters*/
    /** set number of rows
    @pre none
    @post none
    @param row - # of rows for map */
    void set_rows(int row);

    /** set number of columns
    @pre none
    @post none
    @param col - # of columns */
    void set_col(int col);

    /** set number of ships
    @pre none
    @post none
    @param ship - # of columns */
    void set_ships(int ship);

    /*MARK: Getters*/
    /** return num of rows
    @pre
    @post */
    int get_rows() const;

    /** return num of columns
    @pre
    @post */
    int get_col() const;

    /** return num of ships
    @pre
    @post */
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
};

#endif /* GAMEBOARD_HPP */
