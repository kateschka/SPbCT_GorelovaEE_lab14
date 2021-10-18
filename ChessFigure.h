#pragma once
#include <string>
class ChessFigure
{
private:
	int x, y;
public:
	ChessFigure(unsigned int x, unsigned int y);
	ChessFigure();
	virtual ~ChessFigure();
	virtual bool CanKill(ChessFigure figure);
	virtual std::string GetName();
	int GetX();
	int GetY();
	void SetX(int x);
	void SetY(int y);
};

