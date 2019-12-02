#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cout << "Enter number of elements of  vector : \n";
	cin >> n;

	int temp;
	vector <int> v;
	vector <int> :: iterator it;	
	cout << "Enter the elements of vector :\n";
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	cout << "Enter the task you want to perform :\n(1 - Update a value, 2 - Multiply the complete array by a numeber, 3 - 	Display, 4 - Exit)\n";
	int option;
	cin >> option;

	int value, update_value;
	while(option != 4)
	{
		switch(option)
		{
	 	case 1:
			cout << "Enter which value to update : \n";
			cin >> value;
			cout << "Enter the updated value : \n";
			cin >> update_value;

			it = v.find(value);
			*it = update_value;						

		}	
	}

	return 0;
}
