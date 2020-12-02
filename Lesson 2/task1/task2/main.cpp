#include <iostream>

using namespace std;

int main()
{
    int nomerKart[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array[10] = {0};

    while(true){

            int nomer, deng, sum = 0;

            cout << "Vvedi nomer kartochki: ";
            cin >> nomer;
            cout << "Skolko polozhit? ";
            cin >> deng;

            for (int i = 0; i < 10; i++){

                    array[nomer - 1] = deng;
                    cout << array[i] << " ";
            }
    cout << endl;

    cout << "V summe na vseh kartah: ";

    for (int i = 0; i < 10; i++){

            sum = array[i] + sum;

            }
    cout << sum << endl;

    }
}




