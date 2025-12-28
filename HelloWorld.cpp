// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


 #include <iostream>

char tile1 = '1';
char tile2 = '2';
char tile3 = '3';
char tile4 = '4';
char tile5 = '5';
char tile6 = '6';
char tile7 = '7';
char tile8 = '8';
char tile9 = '9';

void numberSelection() {

  
    std::cout << 1 << " | " << 2 << " | " << 3 << " | " << "\n";
    std::cout << "---+---+--- " << "\n";
    std::cout << 4 << " | " << 5 << " | " << 6 << " | " << "\n";
    std::cout << "---+---+--- " << "\n";
    std::cout << 7 << " | " << 8 << " | " << 9 << " | " << std::endl;

}

void resetBoard() {
    tile1 = ' ';
    tile2 = ' ';
    tile3 = ' ';
    tile4 = ' ';
    tile5 = ' ';
    tile6 = ' ';
    tile7 = ' ';
    tile8 = ' ';
    tile9 = ' ';

}
 
void drawBoard() {

    std::cout << tile1 <<" | "<< tile2 << " | " << tile3 << " | " << "\n";
    std::cout << "---+---+--- " << "\n";
    std::cout << tile4 << " | " << tile5 << " | " << tile6 << " | " << "\n";
    std::cout << "---+---+--- " << "\n";
    std::cout << tile7 << " | " << tile8 << " | " << tile9 << " | " << std::endl;

}

void userInput() {
    int num;
    std::cout << "Press ENTER when ready to make selection....";
    std::cin >> num;

    numberSelection();
    
    int selection;
    std::cout << "Enter number: ";
    std::cin >> selection;


}
    

int main() {
    resetBoard();
    drawBoard();
    userInput();
    drawBoard();

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

          //   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
