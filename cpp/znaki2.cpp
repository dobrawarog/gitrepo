/*
 * znaki.cpp
 * znakiem konczacym tablice jest \0
 */

#include <iostream>
using namespace std; 

void ascii() {
    int i = 0;
    for (i = 65; i < 91; i++){
        cout << i << " - "<< char(i) << endl; 
    }
}

void litery2liczby(char tabzn[], int rozmiar) { 
    for( int i = 65; i < rozmiar; i++){
        cout << tabzn[0] << " - "<< (int)tabzn[i] << endl; 
    }
    
}
void koduj( char tabzn[], rozmiar = 11){
    int i = 0;
    for( int i = 0; i < rozmiar; i++){
    cout << (int)tabzn[i] << endl;
}
}
 
void dekoduj( int tabzn[], rozmiar) {
    int i = 0;
    for( int i = 0; i < 11; i++){
    cout << (int)tabzn[i] << endl;
}
    }    
int main(int argc, char **argv)
{
    int rozmiar = 11;
    //int szyfr;
    //int szyfr[11] = { ,};
    //cout << " Napisz wiadomosc" << endl; 
    //cin >> napis;
    //ascii();
    char napis[rozmiar] = "Czesc";  
    koduj( napis, rozmiar); 
	return 0;
}

