#include <iostream>
using namespace std;

#define BOARD_ROWS 3
#define BOARD_COLS 3
#define BOARD_SIZE BOARD_ROWS * BOARD_COLS



class State {
public:
    State() {
        for (int i = 0; i < 9; i++) {
            board[i] = 0;
        }
    }

    void show() {
        cout << board[0] << "|" << board[1] << "|" << board[2] << endl;
        cout << "-----" << endl;
        cout << board[3] << "|" << board[4] << "|" << board[5] << endl;
        cout << "-----" << endl;
        cout << board[6] << "|" << board[7] << "|" << board[8] << endl;
    }

    int board[9];
};


int main() {
    // State s;
    // s.show();

    cout << BOARD_ROWS << " " << BOARD_COLS << " " << BOARD_SIZE << endl;
    return 0;
}

