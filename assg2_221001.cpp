#include <iostream>
using namespace std;

class complex
{
public:

	float real, imag;

	complex()
	{
		real = 0;
		imag = 0;
	}

	complex operator + (complex c2)
	{
		complex c3;
		c3.real = real + c2.real;
		c3.imag = imag + c2.imag;

		return c3;
	}

	complex operator * (complex c2)
	{
		complex c3;
		c3.real = (real * c2.real) - (imag * c2.imag);
		c3.imag = (real * c2.imag) + (imag * c2.real);

		return c3;

	}

	friend ostream& operator << (ostream& out, const complex& c);
	friend istream& operator >> (istream& in, complex& c);

};

ostream& operator << (ostream& out, const complex& c)
{
	out << c.real;
	out << " + " << c.imag << "i";
	return out;
};

istream& operator >> (istream& in, complex& c)
{
	in >> c.real >> c.imag;
	return in;
};



int main()
{
	complex c1, c2;
	cout << "Enter the 1st complex number's real and imaginery part :\n";
	cin >> c1;
	cout << "Enter the 2nd complex number's real and imaginery part:\n";
	cin >> c2;

	cout << "1st Complex number : " << c1;
	cout << "2nd Complex number : " << c2;

	int choice;
	cout << "Enter which operation you want to perform :\n(1 - Add, 2 - Multiply, 3 - Print, 4 - Stop)\n";
	cin >> choice;
	complex c3, c4;

	while (choice != 4)
	{
		switch (choice)
		{
		case 1:  // Add
			c3 = c1 + c2;
			cout << "c1 + c2 = " << c3 << endl;
			break;

		case 2: // Multiply
			c4 = c1 * c2;
			cout << "c1 * c2 = " << c4 << endl;;
			break;

		case 3: //  Display
			cout << "1st complex number = " << c1 << endl;
			cout << "2nd complex number = " << c2 << endl;
			break;

		}
		cout << "Enter which operation you want to perform :\n(1 - Add, 2 - Multiply, 3 - Print, 4 -Stop)\n";
		cin >> choice;
	}

	return 0;
}
