#include <iostream>
using namespace std;

class shape
{
public:

	float area, a, b;

	virtual void get_data()
	{
		cin >> a >> b;
	}

	void display()
	{
		cout << "Area = " << area << "\n";
	}

};

class rectangle : public shape
{
public:
	void calculate_area()
	{	
		area = a * b;
	}

};

class triangle : public shape
{
public:
	void calculate_area()
	{
		area = (a * b) / 2;
	}
};

class square : public shape
{
public: 
	void get_data()
	{	
		cin >> a;
	}

	void calculate_area()
	{
		area = a * a;
	}

};

class circle : public shape
{
public:
	void get_data()
	{
		cin >> a;
	}

	void calculate_area()
	{
		area = 3.14 * a * a;
	}

};

int main()
{
	rectangle r;
	triangle t;
	shape *sptr, *cptr;
	square s;
	circle c;
	sptr = &s;
	cptr = &c;

	int choice;
	cout << "Select a choice of shape :\n(1 - Rectangle, 2 - Triangle, 3 - Square, 4 - Circle, 5 - Exit)\n";
	cin >> choice;

	while(choice != 5)
	{
		switch(choice)
		{
		 case 1:
			cout << "Enter the length of two sides : \n"; 
			r.get_data();
			r.calculate_area();
			r.display();
			break;

		case 2:
			cout << "Enter the length of base and height : \n";
			t.get_data();
			t.calculate_area();
			t.display();	
			break;

		case 3:
			cout << "Enter the length of a side : \n";
			sptr->get_data();
			s.calculate_area();
			sptr->display();
			break;

		case 4:
			cout << "Enter the radius of circle : \n";
			cptr->get_data();
			c.calculate_area();
			cptr->display();
			break;

		default:
			cout << "Enter the correct choice\n";

		}

		cout << "\nSelect a choice of shape :\n(1 - Rectangle, 2 - Triangle, 3 - Square, 4 - Circle, 5 - Exit)\n";
		cin >> choice;
	}

	return 0;
}



