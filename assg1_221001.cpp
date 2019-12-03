#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// id, name, salary, blood group, dob, address, phone number

class employee
{
protected:
	string id, name, dob, address, phone_no, blood_grp;

public:
	employee()
	{
		name = "Manoj Kumar";
		id = "EN1923";
		dob = "12/04/1992";
		address = "Shivajinagar, Pune";
		phone_no = "9983463466";
		blood_grp = "B+";
	}

	void accept()
	{
		cout << "Enter name : ";;

		getline(cin, name, '\n');
		cout << "Enter id : ";

		getline(cin, id, '\n');
		cout << "Enter date of birth : ";

		getline(cin, dob, '\n');
		cout << "Enter address : ";

		getline(cin, address, '\n');

	t1:
		cout << "Enter phone number : ";
		getline(cin, phone_no, '\n');

		if (phone_no.size() != 10)
		{
			cout << "Please enter correct 10 digit phone number.\n";
			goto t1;
		}

	t2:
		bool check = false;
		cout << "Enter blood group : ";
		getline(cin, blood_grp, '\n');

		if ( (blood_grp == "A+") || (blood_grp == "A-") || (blood_grp == "B+") || (blood_grp == "B-") || (blood_grp == "O+") || (blood_grp == "O-") )
		{
			check = true;
		}
		if (check == false)
		{
			cout << "Please enter a valid blood group.\n";
			goto t2;
		}
		if (blood_grp.size() != 2)
		{
			cout << "Please enter only 2 characters in input blood group.  \n";
			goto t2;
		}

		cout << endl;
	}

	void delete_data()
	{
		id = "-1";
	}

	void display()
	{

		if (id.compare("-1") != 0)
		{
			cout << left << setw(10) << id;
			cout << left << setw(25) << name;
			cout << left << setw(14) << dob;
			cout << left << setw(20) << phone_no;
			cout << left << setw(14) << blood_grp;
			cout << left << setw(40) << address;
			cout << endl;
		}
	}

	friend int search(employee e[], string search_id, int n);

};


int search(employee e[], string search_id, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (search_id.compare(e[i].id) == 0)
			return i;

	return -1;
}


int main()
{
	int n, i;
	employee* e = new employee[25];

	cout << "Enter number of employees :\n";
	cin >> n;

	cout << "Following is sample of input data :\n\n";
    cout << "  ID              Name               DOB       Phone Number    Blood Group                 Address\n\n";

	e[0].display();
	cout << "\n\n";

	int choice;

	cout << "Enter the option you want to perform :\n(1 - Create Database, 2 - Display, 3 - Add data, 4 - Delete data, 5 - Search, 6 - Stop)\n";
	cin >> choice;
	cin.get();

	int found_del_index;
	string delete_id;
	while (choice != 6)
	{
		switch (choice)
		{
		case 1:  //ACCEPT
			cout << "\nEnter the student data :\n";
			for (i = 0; i < n; i++)
				e[i].accept();

			break;

		case 2: // DISPLAY
			cout << "  ID              Name               DOB       Phone Number    Blood Group                 Address\n\n";


			for (i = 0; i < n; i++)
				e[i].display();
			break;

		case 3: //ADD DATA
			cin.get();
			e[n].accept();
			n++;
			break;

		case 4: //DELETE DATA

			cout << "Enter ID of employee : ";
			cin.get();
			getline(cin, delete_id, '\n');

			found_del_index = search(e, delete_id, n);

			e[found_del_index].delete_data();

			break;

		case 5: // SEARCH
			string search_id;

			cout << "Enter ID of employee :";
			cin.get();
			getline(cin, search_id, '\n');

			int found_index = search(e, search_id, n);

			if (found_index == -1)
				cout << "Given ID not present in database.\n";
			else
				e[found_index].display();

			break;
		}

		cout << "\nEnter the option you want to perform :\n(1 - Create Database, 2 - Display, 3 - Add data, 4 - Delete data, 5 - Search, 6 - Stop)\n";
		cin >> choice;

	}

	delete[] e;

	return 0;
}

