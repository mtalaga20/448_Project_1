//
//  gameBoard.cpp
//
//  Created by Adam Abernathy on sept 8 2021
//  Copyright © 2021 Adam Abernathy. All rights reserved.
//
// game board implemntation
//

#include "gameBoard.hpp"
// #include "myDefines.h"

using namespace std;

/*******************************************************************************
**
**MARK: Constructors
**
*******************************************************************************/
//default
GameBoard::GameBoard(){

}

//with param
GameBoard::GameBoard(int row, int col, int ships) {
    num_rows = row;
    num_col = col;
    num_ships = ships;
}

/*******************************************************************************
**
**MARK: Methods
**
*******************************************************************************/

void GameBoard::set_rows(int row) {
    num_rows = row;
}

void GameBoard::set_col(int col) {
    num_col = col;
}

void GameBoard::set_ships(int ship) {
    num_ships = ship;
}

int GameBoard::get_rows() const{
    return num_rows;
}

int GameBoard::get_col() const{
    return num_col;
}

int GameBoard::get_ships() const{
    return num_ships;
}

void GameBoard::printBoard() {
    ;
}

void GameBoard::printInstructions() {
    ;
}

void GameBoard::printLegend() {
    
}
