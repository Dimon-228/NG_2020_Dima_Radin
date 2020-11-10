#include <iostream>

using namespace std;

int main()
{
   int a = 0;
   cout << "Skolko vi polychaete deneg?: ";
   cin >> a;
   if (a < 0){
    cout << "Nevozmozhno...";
    return 0;
   }
   if (a <= 999){
    cout << "Rabotai bolshe";
    cout << ",no ti molodec!";
    return 0;
   }
   if (a >= 1000, a < 1000000){
    cout << "Tak derzhat!";
   }
   if (a >= 1000000) {
    cout << "Ti millioner!";
   }
   cout << ",no ti molodec!";
   return 0;
}
