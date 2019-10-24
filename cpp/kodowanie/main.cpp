#include <iostream>

using namespace std;

void ascii(){
    int i = 0;
    for (i = 65; i<91; i++){
        cout << i <<" - "<<char(i) << endl;
    }
}

void litery2liczby(char tabzn[], int rozmiar){
    int i = 0;
    for (i = 0; i<rozmiar; i++){
        cout << tabzn[i] <<" - "<<(int)tabzn[i] << endl;
    }
    }

void koduj(char tabzn[], int rozmiar = 11){
    int i = 0;
    for (i = 0; i<rozmiar; i++){
    cout << tabzn[i]<<" - "<<(int)tabzn[i] << endl;
    }
    }

void odkoduj (int tabli[], int rozmiar=11){
    int i = 0;
    for (i = 0; i<11; i++){
        cout << tabli[i] <<" - "<<(char)tabli[i] << endl;
    }
    }

int main(int argc, char **argv)
{
    int rozmiar = 11;
    char napis2[11] = "Czesc";
    koduj(napis2, rozmiar);
    cout<< endl;
    int napis3[11] = { 67, 122, 101, 115, 99 };
    odkoduj(napis3, rozmiar);
    return 0;
}

