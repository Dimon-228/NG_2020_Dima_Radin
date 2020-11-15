#include <iostream>

using namespace std;
void ots()
{
    cout << "" << endl;
}
int main()
{
    int razmer, i, j;


    cout << "Vvedite razmer: ";
    cin >> razmer;
    if(razmer <= 0){

        cout << "Nepravilniy razmer!";
        return 0;
    }

    for (i = 0; i < razmer; i++){      //1
        for (j = 0; j < razmer; j++){

            cout << "*";
        }
       ots();
    }
    ots();

    for (i = 0; i < razmer; i++){      //2
        for (j = 0; j <= i; j++){

            cout << "*";
        }
        ots();
    }
    ots();

    for (i = 0; i < razmer; i++){      //3
        for(j = razmer; j > i; j--){

            cout << " ";
        }
        for (j = 0; j <= i; j++){
            cout << "*";
        }
       ots();
    }
    ots();

    for (i = 0; i < razmer; i++){      //4
        for (j = razmer; j > i; j--){
            cout << "*";
        }
        ots();
    }
    ots();

    for (i = 0; i < razmer; i++){      //5
        for(j = 0; j <= i; j++){

            cout << " ";
        }
        for (j = razmer; j > i; j--){
            cout << "*";
        }
       ots();
    }
    ots();
    return 0;
}
