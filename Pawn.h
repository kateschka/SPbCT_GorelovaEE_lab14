#pragma once
#include "ChessFigure.h"
#include <string>
class Pawn :
    public ChessFigure
{
	private:
		int x, y;
	public:
		Pawn(unsigned int x, unsigned int y);
		virtual bool CanKill(ChessFigure figure);
		virtual std::string GetName();
		virtual ~Pawn();
};

