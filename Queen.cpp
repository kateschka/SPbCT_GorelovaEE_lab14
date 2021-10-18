#include "Queen.h"
#include <iostream>
using namespace std;

Queen::Queen(unsigned int x, unsigned int y)
	{
		this->x = x;
		this->y = y;
	};
Queen::~Queen() {};
bool Queen::CanKill(ChessFigure figure)
	{
		if (this->GetX() == figure.GetX())
			return true;
		if (this->GetY() == figure.GetY())
			return true;
		if (abs(this->GetX() - figure.GetX()) == abs(this->GetY() - figure.GetY()))
			return true;
		return false;
	};
string Queen::GetName()
	{
		return "Queen";
	}

