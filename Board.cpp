#include "Board.h"


Board::Board(int a, int b)
{
    boardWidth = a;
    boardHeight = b;
    boardGame = new bool*[boardWidth];

    for (int i = 0; i < boardWidth; i++)
    {
        boardGame[i] = new bool[boardHeight];
    }

    for (int i = 0; i < boardWidth; i++)
    {
        for (int j = 0; j < boardHeight; j++
        {
            boardGame[i][j] = false;
        }
    }
}

void Board::changeValue(bool a, int x, int y)
{
    boardGame[x][y] = a;
}

Board::~Board()
{
}
