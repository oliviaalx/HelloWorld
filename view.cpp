#include "View.h"
#include <iostream>

void View::drawBoard(const Board& board) {
    std::cout << "    A   B   C\n";
    std::cout << "  +---+---+---+\n";

    for (int r = 0; r < 3; r++) {
        std::cout << " " << (r + 1) << " | ";
        for (int c = 0; c < 3; c++) {
            std::cout << board.getTile(r, c) << " | ";
        }
        std::cout << "\n  +---+---+---+\n";
    }
}

void View::showMessage(const std::string& msg) {
    std::cout << msg << "\n";
}