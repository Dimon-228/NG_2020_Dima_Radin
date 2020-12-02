#include <iostream>

using namespace std;

int main()
{
    int a, b, d;

    cout << "Vvedite chislo a: ";
    cin >> a;
    cout << "Vvedite chislo b: ";
    cin >> b;
    cout << "Vvedite deistvie: ";
    cin >> d;

    if (d > 0 && d < 5){

        cout << "Resultat = ";
    }

    switch (d){

        case 1:  cout << a + b;
        break;
        case 2:  cout << a - b;
        break;
        case 3:  cout << a * b;
        break;
        case 4:  cout << a / b;
        break;
        default:

            cout << "Nepravilnoe chislo";

        break;
    }
}





