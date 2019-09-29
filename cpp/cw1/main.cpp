#include <iostream>

using namespace std;

int main()
{
 int suma = 0;
    int i=0;
    while(suma <= 75){
        cout << "Podaj liczbe: ";
        cin >> i;
        suma += i;
        cout <<  suma << endl;
    }
    return 0;
}
