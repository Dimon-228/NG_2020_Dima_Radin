#include <iostream>

using namespace std;

int main()
{
    int a, b, rez, d;
    cout << "Vvedite chislo a: ";
    cin >> a;
    cout << "Vvedite chislo b: ";
    cin >> b;
    cout << "Vvedite deistvie: ";
    cin >> d;
    switch (d){
    case 1:
        d == 1;
        rez = a + b;
        cout << "Rezultat = " << rez;
        break;
    case 2:
        d == 2;
        rez = a - b;
        cout << "Rezultat = " << rez;
        break;
    case 3:
        d == 3;
        rez = a * b;
        cout << "Rezultat = " << rez;
        break;
    case 4:
        d == 4;
        rez = a / b;
        cout << "Rezultat = " << rez;
        break;
    default:
        cout << "Nepravilnoe chislo...";
        break;
    }
    return 0;
}






