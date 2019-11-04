#include <iostream>
#include <iomanip>
using namespace std;

#define	w	5
#define	k	7
{   
    int w = 5; 
    int k = 7; 
    int i; 
    int j;
    int a; 
    int r; 
    int tab[w][k];
    cout << "Podaj wartosc pierwszego elementu: " << endl;
    cin >> a;
    cout << "Podaj liczbę o którą powiększać: " << endl;
    cin >> r;
    srand (time(NULL));
    (i=0; i < w; i++){
    for(j=0; j < k; j++){
        tab[i][j] = a+(i+1)*(j+1)*r;
        cout << setw(2) << tab[i][j] << " ";}
        cout << endl;
    }
    
  return 0;
}
