#include "Field.h"
#include "Square.h"
#include "struct.h"



int main()
{
	Field field(10);
	//Square sq;
	Ship ship;

	ship.m_size = 3;
	ship.m_id = 1;
	
	Coords cb, ce;
	cb.coord_X = 0; cb.coord_Y = 0;
	ce.coord_X = 0; ce.coord_Y = 2;
	

	field.SetShip(ship, cb, ce);
	field.MakeShoot(cb);
	field.Draw();


	return 0;
}