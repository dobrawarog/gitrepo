#include <iostream>

using namespace std;


#include <iostream>

using namespace std;

void pobierzliczby(int tab[], int ile) {
    int i = 0;
    for (i = 0; i < ile; i++) {
        cout << "Podaj liczbê: ";
        cin >> tab[i];
    }
}

void suma(int tab[], int ile) {
    int i = 0;
    int suma = 0;
    for (i = 0; i < ile; i++) {
        suma += tab[i];
    }
    cout << "Suma liczb: " << suma << endl;
}

void srednia(int tab[], int ile) {
      float srednia;
      float suma;
      int i = 0;
      suma += tab[i];
      srednia = suma / ile;
     cout << "srednia liczb: " << srednia << endl;
}

int main(int argc, char **argv)
{
    int rozmiar = 0;
    cout << "Ile liczb podasz: ";
    cin >> rozmiar;

    int liczby[rozmiar];

    pobierzliczby(liczby, rozmiar);
    suma(liczby, rozmiar);
    srednia(liczby, rozmiar);
    return 0;
}
