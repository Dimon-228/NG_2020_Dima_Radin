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
        case 1: rez = a + b;
        break;
        case 2: rez = a - b;
        break;
        case 3: rez = a * b;
        break;
        case 4: rez = a / b;
        break;
        default:
        cout << "Nepravilnoe chislo...";
        return 0;
    }
    cout << "Resultat = " << rez;
    return 0;
}






