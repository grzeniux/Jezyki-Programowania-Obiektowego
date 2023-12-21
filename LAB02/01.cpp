// LAB02_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <cmath>


class Point2D
{
private:
	double x, y;
public:
	Point2D(double a = 0.0, double b = 0.0) : x(a), y(b) {}
	Point2D(const Point2D& A) : x(A.x), y(A.y) {}
	void setX(double a) { this->x = a; };
	void setY(double b) { this->y = b; };
	double getX() { return x; };
	double getY() { return y; };
};

class Circle
{
private:
	Point2D center;
	double radius;
public:
	Circle(const Point2D& p, double r = 1.0) : center(p), radius(r) {};
	bool is_inside(Point2D&);
	double getR() { return radius; };
};

bool Circle::is_inside(Point2D& p) {
	double d = sqrt(pow(p.getX() - center.getX(), 2) + pow(p.getY() - center.getY(), 2));
	d = pow(d, 0.5);
	return d <= radius;
}

int main()
{
	setlocale(LC_ALL, "pl_PL"); setlocale(LC_ALL, "polish");
	std::mt19937 gen(std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_real_distribution distribution{ -1.0,1.0 };

	std::cout << "wpisz liczb? punkt w: ";
	auto num_of_pts{ 0 };
	std::cin >> num_of_pts;

	Point2D center(0.0, 0.0);
	Circle circle(center, 1.0);
	int count{ 0 };
	std::cout << "\n\n";
	std::cout << "Generowanie punkt w...\n";

	for (auto i = 0; i < num_of_pts; ++i) {
		Point2D point(distribution(gen), distribution(gen));
		if (circle.is_inside(point)) count++;
	}

	std::cout << "Liczba punkt w wewn?trz okr?gu: " << count << "\n";
	std::cout << "Pole okr?gu wynosi: " << (4.0 * count / num_of_pts) << "\n";
	std::cout << "St?d przybli?ona warto?? liczby pi wynosi: " << (4.0 * count / num_of_pts) / pow(circle.getR(), 2) << "\n";
}