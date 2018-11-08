#include<iostream>
#include "board.h"
#include "snake.h"

using namespace std;


int main()
{

    Board g_board(500, 100);
    Snake g_snake(25, 50,g_board);

    g_board.draw();
    return 0;

}
