#include <iostream>
#include <vector>
#include <iterator>
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

	cout << "Enter the task you want to perform :\n(1 - Update a value, 2 - Multiply the complete array by a number, 3 - Display, 4 - Exit)\n";
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

			for(it = v.begin(); it != v.end(); it++)
			{
				if(*it == value)
				{
					*it = update_value;
					break;
				}	
			}
			if(it == v.end())
				cout << "Element not present!\n";

			break;
		case 2:
			cout << "Enter the value you want to multiply : \n";
			cin >> value;
			for(int i = 0; i < v.size(); i++)
			{
				v[i] *= value;
			}				
			break;

		case 3:
			for(it = v.begin(); it != v.end(); it++)
				cout << *it << " ";
			cout << endl;
			break;

		default : cout << "Enter the right choice\n";
		}
	cout << "Enter the task you want to perform :\n(1 - Update a value, 2 - Multiply the complete array by a number, 3 - Display, 4 - Exit)\n";
	cin >> option;
	
	}

	return 0;
}
