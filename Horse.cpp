#include "Horse.h"
#include <iostream>
using namespace std;

Horse::Horse(unsigned int x, unsigned int y)
	{
		this->x = x;
		this->y = y;
	};
Horse::~Horse() {};
bool Horse::CanKill(ChessFigure figure)
	{
		return (abs(this->GetY() - figure.GetY()) == 2 && abs(figure.GetX() - this->GetX()) == 1) ||
			(abs(this->GetY() - figure.GetY()) == 1 && abs(figure.GetX() - this->GetX()) == 2);
	};
string Horse::GetName()
	{
		return "Horse";
	}

