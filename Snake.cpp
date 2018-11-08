#include "Snake.h"


Snake::Snake(int x, int y, Board &a)
{
    p_X = x;
    p_Y = y;

    a.changeValue(true, p_X, p_Y);
}

Snake::~Snake()
{
}
