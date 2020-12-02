#include <iostream>

using namespace std;

int main()
{
  int number;
  char symb = ',';

  cout << "Vvedite chislo: ";
  cin >> number;

  for (int i = 0; i <= number; i++){
            cout << i;

                while (i < number){
                        cout << symb;
                        break;
                }
  }
  return 0;
}

