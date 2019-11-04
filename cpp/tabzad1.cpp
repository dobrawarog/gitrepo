/*
 * tablica2w.cpp

 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{{   
    int rozmiar = 5;
    int tab1[rozmiar];
    int tab2[rozmiar];
    int i;
    int j;
    int tab[5][5]; 
    
    for(i = 0; i < rozmiar; i++){
        cout << "Podaj 5 cyfr" << i+1 << endl;
        cin >> tab1[i];
        }
    for(j = 0; j < rozmiar; j++){
        cout << "Podaj 5 cyfr" << j+1 << endl;
        cin >> tab2[j];
        }
    
    for(i=0; i <rozmiar; i++){
        for(j=0; j <rozmiar; j++){
            tab[i][j] = tab1[i] + tab2[j];
            cout << setw(2) << tab[i][j] << "  ";
        }
        cout << endl;
    }
}    
	return 0;
}

