#include <iostream>

using namespace std;

int main()
{
    int liczba;
    int wynik;
    cout << "wprowadz liczbe" << endl;
    cin >> liczba;

    if (liczba%2==0 && liczba != 1)
       wynik = liczba / 2;
    else
      wynik = 3 * liczba + 1;

    cout << wynik;
    return 0;
}
