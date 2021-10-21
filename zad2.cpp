#include <iostream>

using namespace std;

int main()
{
	int A;
	cout << "Wpisz liczbe, aby sprawdzic czy jest parzysta:" << endl;

	cout << "Wpisz liczbe: ";
	cin >> A;

	if (A%2 == 0) {
		cout << "Liczba " << A << " jest parzysta";
	}
	else {
		cout << "Liczba " << A << " nie jest parzysta";
	}

}

