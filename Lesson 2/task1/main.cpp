#include <iostream>

using namespace std;

int main()
{
    int array [10];
    int tvshk;

    for(int i = 0; i < 10; i++){

        cout << "Vvedi nomer shkoli: ";
        cin >> array[i];
    }

    cout << "A teper vvedi svoyu shkolu: ";
    cin >> tvshk;

   for(int i = 0; i < 10; i++){

        if(tvshk == array[i]){

            cout << "Ya znayu etu shkolu!";
            return 0;
        }
   }

   cout << "Ya ne znayu etu shkolu!";
   return 0;
}
