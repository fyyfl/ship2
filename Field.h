#pragma once
#include "struct.h"
#include "Square.h"

class Field
{
public:
	Field(int);
	~Field();
	Square **m_squares;
public:
	void Draw();
	bool SetShip(Ship ship, Coords begin, Coords end); //установка кораблей по координатам
	bool MakeShoot(Coords c);
private:
	int sizeF;
};

