#pragma once
#include "ChessFigure.h"
class Queen :
    public ChessFigure
{
private:
	int x, y;
public:
	Queen(unsigned int x, unsigned int y);
	virtual bool CanKill(ChessFigure figure);
	virtual std::string GetName();
	virtual ~Queen();
};

