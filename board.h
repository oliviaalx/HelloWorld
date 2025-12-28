#ifndef BOARD_H
#define BOARD_H

#include <utility>   // for std::pair
#include <vector>    // for std::vector

class Board {
public:
    Board();                                // Constructor
    void reset();                            // Reset board to empty
    bool isTileEmpty(int r, int c) const;    // Check if tile is empty
    void placeMove(int r, int c, char symbol); // Place X or O
    char getTile(int r, int c) const;        // Read tile value

    bool checkWin(char symbol) const;        // Check if symbol has won
    bool checkDraw() const;                  // Check if board is full
    void computerMove();                     // Random computer move

private:
    char tiles[3][3];                        // 3x3 board storage
};

#endif
