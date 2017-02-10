#include "Square.h"
#include <iostream>

void Square::Draw()
{
	if (!m_wasChecked) 
		std::cout <<" ";
	else
		if (m_shipid==0) 
			std::cout <<"X";
		else 
			std::cout <<"*";
}


Square::Square():m_shipid(0),m_wasChecked(true)
{
	//std::cout << m_shipid << std::endl;
}

Square::~Square()
{
}
