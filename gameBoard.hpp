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

class gameBoard {

private:
    int num_rows;//number of board rows
    int num_col; //number of board columns
    int num_ships; //number of ships used in game

public:
    /*MARK: Constructors*/
    //default
    gameBoard();

    /** with param
    @pre
    @post
    @param row - number of rows
    @param col - number of columns
    @param ships - number of ships in game */
    gameBoard(int row, int col, int ships);

    //destructor
    ~gameBoard();

    /*MARK: Setters*/
    /** set number of rows
    @pre
    @post
    @param rows - # of rows for map */
    void set_rows(int row);

    /** set number of columns
    @pre
    @post
    @param col - # of columns */
    void set_col(int col);

    /** set number of ships
    @pre
    @post
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
    @pre
    @post  */
    void printBoard();

    /** prints the instructions
    @pre
    @post */
    void printInstructions();

    /** prints the legend
    @pre
    @post */
    void printLegend();
};

#endif /* GAMEBOARD_HPP */
