//
//  gameBoard.cpp
//
//  Created by Adam Abernathy on sept 8 2021
//  Copyright © 2021 Adam Abernathy. All rights reserved.
//
// game board implemntation
//

#include "myDefines.h"

//macros
using namespace std;
#define ROWS 9
#define COLUMNS 6
#define TEST_SHIPS 4

/*******************************************************************************
**
**MARK: Constructors
**
*******************************************************************************/
//default
GameBoard::GameBoard() {
    num_rows = ROWS;
    num_col = COLUMNS;
    num_ships = TEST_SHIPS;
}

//with param
GameBoard::GameBoard(int row, int col, int ships) {
    num_rows = row;
    num_col = col;
    num_ships = ships;
}

/*******************************************************************************
**
**MARK: Setter Methods
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

/*******************************************************************************
**
**MARK: Getter Methods
**
*******************************************************************************/

int GameBoard::get_rows() const{
    return num_rows;
}

int GameBoard::get_col() const{
    return num_col;
}

int GameBoard::get_ships() const{
    return num_ships;
}

/*******************************************************************************
**
**MARK: Methods
**
*******************************************************************************/

void GameBoard::printBoard() {
    cout << "THE BOARD" << endl;
    printInstructions();
    printLegend();
    //print current array
    cout << "THEND BOARD" << endl;
    
}

void GameBoard::printInstructions() {
    cout << "inst line 1" << endl;
    cout << "inst line 2" << endl;
    cout << "inst line 3" << endl;
    cout << "inst line 4" << endl;
}

void GameBoard::printLegend() {
    cout << "************* LEGEND ************" << endl;
    cout << "X => HIT  O => MISS  ? => UNKNOWN" << endl;
}

void GameBoard::printSquare() {
    //TODO: needs proto
}

void GameBoard::fill_empty(char *arr[]) {
    for (int r = 0; r<num_rows; r++) {
        for (int c = 0; c<num_col; c++) {
            arr[r][c] = '?';
        }
    }
}
