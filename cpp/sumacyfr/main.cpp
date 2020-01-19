#include <iostream>

using namespace std;

int main(){
     int n;
     cout << "Podaj liczbe calkowita";
     cin  >> n;
     int rob;
     rob = n;
     int s=0;
     while(rob > 0)
     {
         s += rob % 10;
         rob /= 10;
         }  cout << "Suma cyfr liczby " << n << "wynosi" << s << endl;
         return 0;
}
