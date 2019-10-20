/*
 * tablica4.cpp
 *
 * Copyright 2019  <>

 *
 */


#include <iostream>
using namespace std;


void pobierzoceny(int t[], int r)
{
  cout << "Podaj oceny: " << endl;
  int i;
  for (i=0; i < r; i++)
 {
     cin >> t[i];
 }
}

void drukujTab(int t[], int r)
{
    float suma;
    int i;
    for(int i=0; i < r ; i++){
    cin >> oceny[i];
    suma += oceny[i];

    }
}

float arymetyczna(int t[], int r)
{
    float srednia;
    int suma;
    for (i=0; i < r; i++)
    cout <<

    return srednia;
    }

int main(int argc, char **argv)
{
    cout << "Ile ocen podasz?";
    int rozmiar
    cin >> rozmiar;
    int tablica[rozmiar];
	pobierzoceny(tablica, rozmiar);
    drukujTab(tablica, rozmiar);

	return 0;
}

