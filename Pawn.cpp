#include "Pawn.h"
#include <iostream>
using namespace std;

Pawn::Pawn(unsigned int x, unsigned int y)
	{
		this->x = x;
		this->y = y;
	};
Pawn::~Pawn() {};
bool Pawn::CanKill(ChessFigure figure)
	{
		return this->GetY() == figure.GetY() && std::abs(figure.GetX() - this->GetX()) == 1;
	};
string Pawn::GetName()
	{
		return "Pawn";
	}
