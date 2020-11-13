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
   if (a < 1000){
    cout << "Rabotai bolshe";
   }
   if (a > 999){
   if (a < 1000001){
   cout << "Tak derzhat!";
   }
    if (a > 1000000){
    cout << "Ti millioner!";
}
}
 cout << ",no ti molodec!";
   return 0;
}
