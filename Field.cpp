#include "Field.h"
#include <iostream>

bool Field::SetShip(Ship ship, Coords begin, Coords end)
{
	if (begin.coord_X == end.coord_X) // вертикальный кораблик
		for (int i = begin.coord_Y; i < end.coord_Y; ++i)
		{
			m_squares[begin.coord_X][i].SetShip(ship.m_id);
		}
			
	else if (begin.coord_Y==end.coord_Y)
		for (int i = begin.coord_X; i < end.coord_X; ++i)
		{
			m_squares[begin.coord_Y][i].SetShip(ship.m_id);
		}
	
	return true;
}

bool Field::MakeShoot(Coords c)
{
	m_squares[c.coord_X][c.coord_Y].Check();
	
	return true;
}

void Field::Draw()
{
	for (int x = 0; x < sizeF; ++x)
	{
		for (int y = 0; y < sizeF; ++y)
			 m_squares[x][y].Draw();

		std::cout << std::endl;
	}
	
}

Field::Field(int sz):sizeF(sz)
{
	m_squares = new Square*[sz];
	for (int i = 0; i < sz; ++i)
	{
		m_squares[i] = new Square[sz];
	}
	
}

Field::~Field()
{
}

