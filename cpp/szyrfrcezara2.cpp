/*
 * szyrfrcezara2.cpp
 * 
 */

#include<iostream>
using namespace std;
 
int main()
{
string tekst;
int x;
 
cout<<"podaj tekst do zaszyfrowania"<<endl;
cin >>tekst; //tekst do zaszyfrowania
cout<<"podaj wspolczynnik przesuniecia"<<endl;
cin >> x; //o ile miejsc zamieniamy litery
 
for(int i=0;i<=tekst.length();i++){
if(tekst[i]>=65 && tekst[i]<=90-x) tekst[i]=int(tekst[i])+x; //wielkie liter
else if(tekst[i]>=91-x && tekst[i]<=90) tekst[i]=int(tekst[i])-26+x; // wielkie litery
else if(tekst[i]>=97 && tekst[i]<=122-x) tekst[i]=int(tekst[i])+x; //małe liter
else if(tekst[i]>=123-x && tekst[i]<=122) tekst[i]=int(tekst[i])-26+x; //małe litery
}
cout << tekst<<endl;
 
return 0;
