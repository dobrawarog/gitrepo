/*
 * szyfr_Cezara.cpp

 */
#include <iostream>
using namespace std;

int male_litery(char tekst[]){
    int i = 0;
    while (tekst[i] != '\0'){
        if ((int)tekst[i] > 64 && (int)tekst[i] < 91) {
        tekst[i] = (char)((int)tekst[i]+32);
        }
        i++;
        }
    return tekst[i];
} 

void szyfruj(char tekst[], int klucz){
    int i = 0;
    int kod = 0;
    while(tekst[i] != '\0'){
        kod = (int)tekst[i] + klucz;
        cout << kod << endl;
        if (kod > 122){
            kod = -26;
            }
        tekst[i] = (char)kod;
        i ++;
        
    }
}

void deszyfruj(char tekst[], int klucz){
    int i = 0;
    int kod = 0;
    while(tekst[i] != '\0'){
        kod = (int)tekst[i] - klucz;
        if (kod < 97){
            kod += 26;
            }
        tekst[i] = (char)kod;
        i ++;
        
    }
}

int main(int argc, char **argv)
{
   
    char tekst[20]; 
    cout << "Podaj tekst" << endl;
    cin.getline(tekst, 20);
    male_litery(tekst);
    int klucz = 0;
    cout << "Podaj klucz: ";
    cin >> klucz ;
    klucz = klucz % 26;
    szyfruj(tekst, klucz);
    cout << tekst << endl; 
    deszyfruj(tekst, klucz);
    cout << tekst << endl; 
	return 0;
}

