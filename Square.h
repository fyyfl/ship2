#pragma once

class Square //класс квадрат
{
public:
	Square();
	~Square();

public:
	void Draw(); //метод рисования
	void Check() { m_wasChecked = true; } // метод проверки переменной присвоено истина
	void SetShip(int shipid) { m_shipid = shipid; } //шнициализация защищенной переменной 

private:
	int m_shipid; //переменная номер корабля индивидуал
	bool m_wasChecked;// переменная проверки
	
	
};

