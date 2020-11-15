#include <iostream>

using namespace std;

int main()
{
  int a, i;

  cout << "Vvedite chislo: ";
  cin >> a;

  if (a < 0){

    cout << "Nepravilnoe chislo";
    return 0;

  }

  for(i = 0; i <= a; i++){

    cout << i << " ";

  }
}
