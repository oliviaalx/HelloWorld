#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Board.h"

class View {
public:
    static void drawBoard(const Board& board);
    static void showMessage(const std::string& msg);
};

#endif