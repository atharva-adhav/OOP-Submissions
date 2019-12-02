#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
	list <int> l;
	list <int> :: iterator it;

	int n, pos;
	cout << "Enter number of elements in list :\n";
	cin >> n;

	int temp;
	cout << "Enter the elements of list :\n";
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		l.push_back(temp);
	}

	int option;
	cout << "Enter the option you want to perform :\n(0 - Insert at end, 1 - Insert element before an index, 2 - Reverse, 3 - Sort, 4 - Check if empty, 5- Unique, 6 - Display, 7 - Exit)\n";
	cin >> option;

	while (option != 7)
	{
		switch (option)
		{
		case 0:
			cout << "Enter the element :\n";
			cin >> temp;
			l.push_back(temp);
			break;

		case 1:
			cout << "Enter the element and the index before which you want to insert :\n";
			cin >> temp >> pos;

			it = l.begin();
			advance(it, pos);
			l.insert(it, temp);

			break;

		case 2:
			l.reverse();
			break;

		case 3:
			l.sort();
			break;

		case 4:
			if (l.empty())
				cout << "List is empty \n";
			else
				cout << "List is not empty\n";

			break;

		case 5:
			l.unique();
			break;

		case 6:

			for (it = l.begin(); it != l.end(); it++)
				cout << *it << " ";

			cout << "\n";
			break;

		default:
			cout << "Please enter a valid choice\n";

		}

		cout << "Enter the option you want to perform :\n(1 - Insert element at an index, 2 - Reverse, 3 - Sort, 4 - Check if empty, 5- Unique, 6 - Display, 7 - Exit)\n";
		cin >> option;
	}


	return 0;
}