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
#include <iostream>
using namespace std;

class Figure
{
	private:
		float m_x;
		float m_y;

	public:
		Figure(float x,float y) : m_x{x},m_y{y} {}

		float get_x(void) const { return m_x; }
		float get_y(void) const { return m_y; }
		void set_x(float x) { m_x=x; }
		void set_y(float y) { m_y=y; }
};


class Rectangle : public Figure {
private:
    float m_width;
    float m_height;

public:
	Rectangle(float x, float y, float width, float height)
    : Figure(x, y), m_width{width}, m_height{height} {}

    float get_width(void)  { return m_width; }
    float get_height(void)  { return m_height; }

    void set_width(float width) { m_width = width; }
    void set_height(float height) { m_height = height; }

    void move(float vx, float vy)
    {
        set_x(get_x() + vx);
        set_y(get_y() + vy);
    }



	void rogi(float& p1_x, float& p1_y, float& p2_x, float& p2_y, float& p3_x, float& p3_y, float& p4_x, float& p4_y) const
    {
        p1_x = get_x();
        p1_y = get_y();

        p2_x = get_x() + get_width();
        p2_y = get_y();

        p3_x = get_x() + get_width();
        p3_y = get_y() + get_height();

        p4_x = get_x();
        p4_y = get_y() + get_height();
    }

};

int main(){

Rectangle R1(1.0, 2.0, 3.0, 4.0);

    cout << "Poczatkowe wspolrzedne: (" << R1.get_x() << ", " << R1.get_y() << ")\n";
    cout << "Width: " << R1.get_width() << ", Height: " << R1.get_height() << "\n";

    R1.move(2.0, 3.0);
    cout << "Nowe wspolrzedne (" << R1.get_x() << ", " << R1.get_y() << ")\n";


float p1_x, p1_y, p2_x, p2_y, p3_x, p3_y, p4_x, p4_y;
    R1.rogi(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y, p4_x, p4_y);

    cout << "Corner 1: (" << p1_x << ", " << p1_y << ")\n";
    cout << "Corner 2: (" << p2_x << ", " << p2_y << ")\n";
    cout << "Corner 3: (" << p3_x << ", " << p3_y << ")\n";
    cout << "Corner 4: (" << p4_x << ", " << p4_y << ")\n";

    return 0;
}