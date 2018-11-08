#include<iostream>
#include "board.h"
#include "snake.h"

using namespace std;

void write(Board a)
{
    for (int j = 0; j < 100; j++)
    {
        for (int i = 0; i < 50; i++)
        {
            if (a.boardGame[i][j] == true)
            {
                cout << "W";
            }
            else cout << " ";
        }

        cout << endl;

    }
}

int main()
{

    Board g_board(500, 100);
    Snake g_snake(25, 50,g_board);

    write(g_board);
    return 0;

}
