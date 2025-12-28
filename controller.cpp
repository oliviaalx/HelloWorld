#include "Controller.h"
#include "Board.h"
#include "View.h"
#include <iostream>
#include <cctype>

bool Controller::parseInput(const std::string& input, int& row, int& col) {
    if (input.length() != 2)
        return false;

    char colChar = toupper(input[0]);
    char rowChar = input[1];

    if (colChar < 'A' || colChar > 'C')
        return false;

    if (rowChar < '1' || rowChar > '3')
        return false;

    col = colChar - 'A';
    row = rowChar - '1';

    return true;
}

void Controller::gameLoop() {
    Board board;
    View::showMessage("Welcome to Tic-Tac-Toe!");

    while (true) {
        View::drawBoard(board);

        // Player move
        std::string input;
        int row, col;

        while (true) {
            std::cout << "Enter your move (e.g., A1): ";
            std::cin >> input;

            if (!parseInput(input, row, col)) {
                View::showMessage("Invalid format. Use A1, B2, etc.");
                continue;
            }

            if (!board.isTileEmpty(row, col)) {
                View::showMessage("Tile already taken.");
                continue;
            }

            break;
        }

        board.placeMove(row, col, 'X');

        if (board.checkWin('X')) {
            View::drawBoard(board);
            View::showMessage("You win!");
            return;
        }

        if (board.checkDraw()) {
            View::drawBoard(board);
            View::showMessage("It's a draw!");
            return;
        }

        // Computer move
        board.computerMove();

        if (board.checkWin('O')) {
            View::drawBoard(board);
            View::showMessage("Computer wins!");
            return;
        }

        if (board.checkDraw()) {
            View::drawBoard(board);
            View::showMessage("It's a draw!");
            return;
        }
    }
}