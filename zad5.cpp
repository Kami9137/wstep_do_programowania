#include <iostream>

using namespace std;

int main()
{
    float A, B;
    int oblicz;

    cout << "Podaj liczby A i B aby wykonac dzialanie: "<< endl;

    cout << "Liczba A ";
    cin >> A;

    cout << "Liczba B ";
    cin >> B;

    cout << "1. Suma\n2. Roznica\n3. Iloczyn\n4. Iloraz" << endl;
    cout << "Wybierz dzialanie: ";
        cin >> oblicz;

    switch (oblicz)
    {
    case 1:
        cout << "Wynik sumy podanych liczb: "<< A << "+" << B << "=" << A + B ;
        break;
    case 2:
        cout << "Wynik roznicy podanych liczb: " << A << "-" << B << "=" << A - B ;
        break;
    case 3:
        cout << "Wynik iloczynu podanych liczb: " << A << "*" << B << "=" << A * B ;
        break;
    case 4:
        if (B != 0)
            cout << "Iloraz podanych liczb: " << A << "/" << B << "=" << A / B ;
        else
            cout << "Nie mozna dzielic przez zero!";
        break;
    }
}
