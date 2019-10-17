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
  int i; 
  for (i=0; i < r; i++) 
 {
     cout << t[i]; 
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

