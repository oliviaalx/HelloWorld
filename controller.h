#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>

class Controller {
public:
    static bool parseInput(const std::string& input, int& row, int& col);
    static void gameLoop();
};

#endif
