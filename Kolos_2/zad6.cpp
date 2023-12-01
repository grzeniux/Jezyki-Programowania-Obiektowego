/*
Dana jest klasa Figure, która reprezentuje figure geometryczną na płaszczyźnie:
class Figure
{
	private:
		float m_x;
		float m_y;

	public:
		Figure(float x,float y) : m_x{x},m_y{y} {}
		float get_x(void) { return m_x; }
		float get_y(void) { return m_y; }
		void set_x(float x) { m_x=x; }
		void set_y(float y) { m_y=y; }
};

Napisz klasę Rectangle reprezentującą prostokąt i dziedziczącą klasy Figure. 
Klasa Rectangle powinna dodatkowo zawierać: 
* pola reprezentujące wysokość i szerokość prostokąta, 
* konstruktor umożliwiający zainicjowanie wszystkich jego pól, 
* funkcje void move(float vx, float vy) umożliwiającą przesunięcie prostokąta o wektor [Vx, Vy] (3 pkt)

*/