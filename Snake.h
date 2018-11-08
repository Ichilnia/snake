#pragma once
#include "board.h"


class Snake : public Board
{
    int p_X;
    int p_Y;
public:
    Snake(int x, int y, Board a);
    ~Snake();
};
