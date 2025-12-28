#include "Controller.h"
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    Controller::gameLoop();
    return 0;
}