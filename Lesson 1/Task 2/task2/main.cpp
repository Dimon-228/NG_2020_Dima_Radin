#include <iostream>

using namespace std;

int main()
{
    float a, b, rez;
    int d;
    cout << "Vvedite chislo a: ";
    cin >> a;
    cout << "Vvedite chislo b: ";
    cin >> b;
    cout << "Vvedite deistvie: ";
    cin >> d;
    if (d == 1) {
        rez = a + b;
    }
    if (d == 2){
        rez = a - b;
    }
    if (d == 3){
        rez = a * b;
    }
    if (d == 4){
        rez = a / b;
    }
    cout << "Rezultat = " << rez;
    return 0;
}
