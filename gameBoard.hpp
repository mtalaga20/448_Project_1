//
//  Blob.hpp
//  Abernathy_2876941_Lab8
//
//  Created by Adam Abernathy on sept 8 2021
//  Copyright © 2021 Adam Abernathy. All rights reserved.
//
// game board for battleship game
//
//

#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP

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

    //with par
    //par: row - number of rows
    //     col - number of columns
    //     ships - number of ships in game
    gameBoard(int row, int col, int ships);

    //destructor
    ~gameBoard();

    /*MARK: Setters*/

    /*MARK: Getters*/



    /*MARK: Methods*/
    //prints the game boar
    void printBoard();
};

#endif /* GAMEBOARD_HPP */
