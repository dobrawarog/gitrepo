/*
 * anagram5.cpp
 */

#include <iostream>
#include <cstdlib>
#define Rozmiar 100
using namespace std;

int main(int argc, char **argv)
{
    cout << "Podaj tekst: " << endl;
    char znak;
    cin >> znak; 
    while(" ") 
    {
           if(znak>95) 
            cout<<(char)(znak-32);
        else
            cout << znak; 
        
        cin >> znak; 
    }
    return 0;
}
