#pragma once
#include "ChessFigure.h"
class Horse :
    public ChessFigure
{
private:
	int x, y;
public:
	Horse(unsigned int x, unsigned int y);
	virtual bool CanKill(ChessFigure figure);
	virtual std::string GetName();
	virtual ~Horse();
};

