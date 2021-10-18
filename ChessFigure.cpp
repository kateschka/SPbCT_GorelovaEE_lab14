#include "ChessFigure.h"
#include <iostream>
using namespace std;

ChessFigure::ChessFigure(unsigned int x, unsigned int y)
	{
		this->x = x;
		this->y = y;
	};
ChessFigure::ChessFigure()
{
	x = 0;
	y = 0;
};
ChessFigure::~ChessFigure() {};
bool ChessFigure::CanKill(ChessFigure figure)
	{
		return false;
	};
string ChessFigure::GetName()
	{
		return "Figure";
	}
int ChessFigure::GetX()
	{
		return x;
	}
int ChessFigure::GetY()
	{
		return y;
	}
void ChessFigure::SetX(int x)
{
	this->x = x;
}
void ChessFigure::SetY(int y)
{
	this->y = y;
}



