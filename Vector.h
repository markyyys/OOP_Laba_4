#pragma once
class Vector
{
private:
	int x;
	int y;

public:
	double modul = -1;

	Vector vector_input()
	{
		cout << "Enter vector coords (with ' '): ";
		cin >> x >> y;

		return { x, y };
	}

	double vector_modul()
	{
		modul = sqrt(pow(x, 2) + pow(y, 2));

		return modul;
	}

	void vector_sum(Vector *v2)
	{
		x += v2->x;
		y += v2->y;
	}

	void vector_minus(Vector *v2)
	{
		x -= v2->x;
		y -= v2->y;
	}

	void vector_output()
	{
		cout << "Result of action with vectors: " << x << "," << y << endl;
	}

	Vector(){}
	Vector(int x, int y): x(x), y(y){}
	Vector(const Vector &vector) : x(vector.x), y(vector.y){}
	~Vector(){}
};