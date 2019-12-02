#include <iostream>
#include <string>
using namespace std;
// id, name, salary, blood group, dob, address, phone number
class employee
{
private:
	string id, name, dob, address, phone_no, blood_grp;

public:
	employee()
	{
		name = "Manoj Kumar";
		id = "EN1923";
		dob = "12/04/1992";
		address = "Shivajinagar, Pune";
		phone_no = "9983463466";
		blood_grp = "b+"; 
	}

	void accept()
	{
		cout << "Enter name :";;
		cin.get();
		getline(cin, name);
		cout << "Enter id :";
		cin >> id;
		cout << "Enter date of birth :";
		cin >> dob;
		cout << "Enter address :";
		cin.get()
		getline(cin, address);
	t1:
		cout << "Enter phone number :";
		cin >> phone_no;
		if( strlen(phone) != 10)
		{
			cout << "Please enter correct 10 digit phone number.\n";
			goto t1;
		}

	t2:
		cout << "Enter blood group : ";
		cin >> blood_grp;
		if( (blood_grp[0] != 'A' || blood_grp[0] != 'B'|| blood_grp[0] != 'O') && (blood_grp[1] != '+' || blood_grp[1] '-') )
		{
			cout << "Enter a valid blood group.\n";
			goto t2;
		}
		if( strlen(blood_grp) != 2)
		{
			cout << "Please enter only 2 characters in input blood group.  \n";
			goto t2;
		}
	}

	void display()
	{
		cout << "Name :\t\t " << name << endl;
		cout << "ID :\t\t " << id << endl;
		cout << "Date of Birth :\t\t " << dob << endl;
		cout << "Address :\t\t " << address << endl;
		cout << "Phone Number :\t\t " << phone_no << endl;
		cout << "Blood Group :\t\t" << blood_grp << endl;
	}



};

int search(string &search_id, string id[])
{

	if( strcmp(search_id, id) == 0)
	{
		
	}
}

int main()
{
	int n, i;
	employee e[25];

	cout << "Enter number of employees :\n";
	cin >> n;

	cout << "Following is sample of input data :\n";
	e[0].display();
	
	cout << endl;
	for(i = 0; i < n; i++)
		e[i].accept();
	
	cout << "Enter id to search :";
	string search_id;
	cin >> search_id;
	int search_index = search(&search_id, &e[0].id);

	return 0;
}
