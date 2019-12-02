/*
 * reszta.cpp
 * 
 * Copyright 2019 pc <pc@DESKTOP-FN8QH4V>
 
 */

#include <iostream>
using namespace std;

int nominaly[100];
int liczbaNominalow;

void wczytajNominaly(){
	cout << "Podaj liczbe nominałów: ";
	cin >> liczbaNominalow;

	cout << "Podaj nominały w kolejnosci malejącej: " << endl;
	int i = 0;
	int nominal = 0;
	cin >> nominal;
	nominaly[i] = nominal;
	i++;
	while(i < liczbaNominalow){
		cin >> nominal;
		if (nominal > nominaly[i-1]) { 
			cout << "Nominał wiekszy od poprzedniego!" << endl;
			continue;
		}
		nominaly[i] = nominal;
		i++;
	}

	//for(int i = 0; i < liczbaNominalow; i++){
		//cin >> nominaly[i];
	//}
	for(int i = 0; i < liczbaNominalow; i++){
		cout << nominaly[i] << " "; }
}


int policzNominal(int n) {
    int i = 0;
    nominaly[i];
    int ile = 0;
    for(i = 0, i < LiczbaNominalow, i++){
    if ( n > nominaly[i]) break;
    if (nominaly[i] == n) 
        ile++;
     }   
    return ile;     
}

void znajdzReszte(int reszta){
	cout << "Wypłacone nominały: " << endl;
	int aktualnyNominal = 0;

	while(reszta > 0 && aktualnyNominal < liczbaNominalow){
		cout << "reszta = " << reszta << endl;
        while(aktualnyNominal < liczbaNominalow && reszta < nominaly[aktualnyNominal]) 
        ++aktualnyNominal; 
        int nominal = nominaly[aktualnyNominal];
		cout << "aktualny nominał: " << nominaly[aktualnyNominal] << endl;
        
        if (aktualnyNominal < liczbaNominalow && reszta >=[aktualnyNominal]){
        int liczbaBanktow = reszta / nominaly[aktualnyNominal];
        cout << "Dostępnych nominałów" << policzNominal(nominal);
        reszta = reszta - liczbaBanktow * nominaly[aktualnyNominal];
        cout <<liczbaBanktow << "x" << nominaly[aktualnyNominal] << "zl" << endl; 
    }
	}
}

// [50, 50, 50, 20, 10, 10, 5, 5, 5, 1]
int main(int argc, char **argv)
{
	wczytajNominaly();
	int cena;
	int wplata;
	cout << "Podaj wpłatę: ";
	cin >> wplata;

	do { // petla blokująca
		cout << "Podaj wpłatę: ";
		cin >> wplata;
	} while(wplata < cena);

	znajdzReszte(wplata - cena);

	return 0;
}
