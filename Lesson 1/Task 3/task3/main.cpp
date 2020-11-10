#include <iostream>

using namespace std;

int main()
{
    int a, b, c, rez;
    cout << "Skolko oreshkov nuzhno belochke: ";
    cin >> a;
    cout << "Skolko oreshkov v odnoy shishke: ";
    cin >> b;
    cout << "Skolko shishek bylo sobrano: ";
    cin >> c;
    rez = b * c;
    if (a < 0){
        cout << "Oshibka";
        return 0;
    }
     if (b < 0){
        cout << "Oshibka";
        return 0;
    }
     if (c < 0){
        cout << "Oshibka";
        return 0;
    }
    if (rez >= a){
        cout << "YES";
    }
    if (rez < a){
        cout << "NO";
    }

    return 0;
}
