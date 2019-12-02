#include <iostream>
using namespace std;

int main()
{
	string place;
	char has_4_wheeler;
	bool error = true;

	while(error != false)
	{
		cout << "Enter the place where user stays : \n";
	try {
		cin >> place;
		if(place != "Pune" && place != "Mumbai" && place != "Chennai" && place != "Banglore") {
			throw 10;	
		}
		else {
			error = false;
		}	
	}
	catch(int x) {
		error = true;
		cout << "Place not valid\n";
	}
	}

	error = true;
	cout << "Does user have four wheeler : (y - yes or n - no)\n";

	while(error != false)
	{
	try {
		cin >> has_4_wheeler;
		if (has_4_wheeler != 'y') {
			throw 11;
		}
		else {
			error = false;
		}
	}
	catch(int x) {
		error = true;
		cout << "Enter valid option\n";
	}
	}

	cout << "\nPlace - " << place << "\n";
	cout << "Has a four wheeler - Yes\n";

	return 0;
}
