#pragma once

class Board
{
	int boardWidth;
	int boardHeight;
protected:
	bool **boardGame;
public:
	Board() = default;
	Board(int a, int b);
	~Board();

	void draw();
	void changeValue(bool a,int x, int y);
};
