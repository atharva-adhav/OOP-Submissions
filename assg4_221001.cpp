#include <iostream>
using namespace std;

template <class T>
void SelectionSort(T s[], int n)
{
	int i, j, k;
	for (i = 0; i < n - 1; i++)
	{
		int minindex = i;
		for (j = (i + 1); j < n; j++)
		{
			if (s[minindex] > s[j])
				minindex = j;
		}

		T temp = s[minindex];
		s[minindex] = s[i];
		s[i] = temp;
	}
};

template <class M>
void display(M arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "  ";
	cout << "\n";

};


int main()
{
	int n, option;

	cout << "Type of numbers you want to sort :\n(1 - int, 2 - float, 3 - Exit)\n";
	cin >> option;

	int* arri;
	float* arrf;

	while (option != 3)
	{
		switch (option)
		{
		case 1:
			cout << "Enter number of elements : \n";
			cin >> n;

			arri = new int[n];
			cout << "Enter the elements :\n";
			for (int i = 0; i < n; i++)
				cin >> arri[i];

			SelectionSort(arri, n);
			display(arri, n);
			break;


		case 2:
			cout << "Enter number of elements :\n";
			cin >> n;

			arrf = new float[n];
			for (int i = 0; i < n; i++)
				cin >> arrf[i];

			SelectionSort(arrf, n);
			display(arrf, n);
			break;

		default:
			cout << "Enter the correct choice.\n";
		}

		cout << "\nType of numbers you want to sort :\n(1 - int, 2 - float, 3 - Exit)\n";
		cin >> option;
	}

	return 0;
}

