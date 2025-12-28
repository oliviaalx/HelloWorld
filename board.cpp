#include "Board.h"
#include <cstdlib>
#include <ctime>

Board::Board() {
    reset();
}

void Board::reset() {
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 3; c++)
            tiles[r][c] = ' ';
}

bool Board::isTileEmpty(int r, int c) const {
    return tiles[r][c] == ' ';
}

void Board::placeMove(int r, int c, char symbol) {
    tiles[r][c] = symbol;
}

char Board::getTile(int r, int c) const {
    return tiles[r][c];
}

bool Board::checkWin(char symbol) const {
    // Rows
    for (int r = 0; r < 3; r++)
        if (tiles[r][0] == symbol && tiles[r][1] == symbol && tiles[r][2] == symbol)
            return true;

    // Columns
    for (int c = 0; c < 3; c++)
        if (tiles[0][c] == symbol && tiles[1][c] == symbol && tiles[2][c] == symbol)
            return true;

    // Diagonals
    if (tiles[0][0] == symbol && tiles[1][1] == symbol && tiles[2][2] == symbol)
        return true;

    if (tiles[0][2] == symbol && tiles[1][1] == symbol && tiles[2][0] == symbol)
        return true;

    return false;
}

bool Board::checkDraw() const {
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 3; c++)
            if (tiles[r][c] == ' ')
                return false;
    return true;
}

void Board::computerMove() {
    std::vector<std::pair<int, int>> emptyTiles;

    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 3; c++)
            if (tiles[r][c] == ' ')
                emptyTiles.push_back({ r, c });

    if (!emptyTiles.empty()) {
        int choice = rand() % emptyTiles.size();
        placeMove(emptyTiles[choice].first, emptyTiles[choice].second, 'O');
    }
}