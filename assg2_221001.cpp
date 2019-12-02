#include <iostream>
using namespace std;

struct complex
{
	float real, imag;
};

complex operator + (complex c1, complex c2)
{
	complex c3;
	c3.real = c1.real + c2.real;
	c3.imag = c1.imag + c2.imag;
	
	return c3;
};

complex operator * (complex c1, complex c2)
{
	complex c3;
	c3.real = (c1.real * c2.real) - (c1.imag * c2.imag);
	c3.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
	
	return c3; 
	
};

void print (complex c)
{
	cout << "Complex number = " << c.real << " + " << c.imag << "i" << "\n";
};

int main()
{
	complex c1, c2;
	cout << "Enter the first complex number's real and imaginery part :\n";
	cin >> c1.real >> c1.imag;
	cout << "Enter the second complex number's real and imaginery part:\n";
	cin >> c2.real >> c2.imag;
	print(c1);
	print(c2);
	
	int choice;
	cout << "Enter which operation you want to perform :\n(1 - Add, 2 - Multiply, 3 - Print, 4 - Stop)\n";
	cin >> choice;
	complex c3, c4;
	
	while(choice != 4)
	{
		switch(choice)
		{
		 case 1 :
			c3 = c1 + c2;
			cout << "c1 + c2 = " << c3.real << " + " << c3.imag << "i\n";
			break;
			
		 case 2:
			c4 = c1 * c2;
			cout << "c1 * c2 = " << c4.real << " + " << c4.imag << "i\n";
			break;
			
		 case 3:
		 	break;
		 	
		}
		cout << "Enter which operation you want to perform :\n(1 - Add, 2 - Multiply, 3 - Print, 4 -Stop)\n";
		cin >> choice;
	}

	return 0;
}
