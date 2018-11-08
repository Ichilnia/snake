#include "Board.h"
#include <iostream>


Board::Board(int a, int b)
{
	boardWidth = a;
	boardHeight = b;
	boardGame = new bool*[boardWidth];

	for (int i = 0; i < boardWidth; i++)
	{
		boardGame[i] = new bool[boardHeight];
	}

	for (int i = 0; i < boardWidth; i++)
	{
		for (int j = 0; j < boardHeight; j++)
		{
			boardGame[i][j] = false;
		}
	}
}

void Board::changeValue(bool a, int x, int y)
{
	boardGame[x][y] = a;
}

void Board::draw()
{
	for (int j = 0; j < 100; j++)
	{
		for (int i = 0; i < 50; i++)
		{
			if (boardGame[i][j] == true)
			{
				std::cout << "W";
			}
			else std::cout << " ";
		}
		std::cout << std::endl;
	}
}
Board::~Board()
{
}
