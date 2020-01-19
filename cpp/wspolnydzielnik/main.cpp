#include <iostream>

using namespace std;
int main()
{
    int liczba1;
    int liczba2;
    cout << "Podaj  liczbê 1" << endl;
    cin >> liczba1;
    cout << "Podaj 2 liczbê 2" << endl;
    cin >> liczba2;

    int dzielnik = 2;

    do
    {
        if((liczba1 % dzielnik) == 0 && (liczba2 % dzielnik) == 0)
            cout << "Wspolny dzielnik: " << dzielnik << endl;

        dzielnik++;

    } while(dzielnik <= liczba1 && dzielnik <= liczba2);

    cin.get();
    cin.ignore(1);

    return 0;
}
