#pragma once

class Board
{
protected:
    bool **boardGame;
    int boardWidth;
    int boardHeight;
public:
    Board() = default;
    Board(int a, int b);
    ~Board();
    friend void write(Board a);
    void changeValue(bool a,int x, int y);
};
