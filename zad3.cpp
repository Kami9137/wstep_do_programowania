#include <iostream>

using namespace std;

int main()
{
    float A, B;
    int oblicz;

    cout << "Wprowadz liczby A i B, aby sprawdzic, ktora jest wieksza: " << endl;

    cout << "Liczba A";
    cin >> A;

    cout << "Liczba B";
    cin >> B;

    if (A > B) {
        cout << "Liczba A jest wieksza.";
    }
    else {
        cout << "Liczba B jest wieksza.";
    }

}
