/*
 * trojkat.cpp
 */


#include <iostream>

using namespace std;
#include <cmath>

int main(int argc, char **argv)
{
    int b;
    int a;
    int c;
    cout << "Podaj bok a; ";
    cin >> a;
    cout << "Podaj bok b; ";
    cin >> b;
    cout << "Podaj bok c; ";
    cin >> c;
    if ( a + b > c)
    {
    if (a + c > b)
    {
    if (b + c > a)
     cout << "Da się zrobic trojkat" << std::endl;}}
    else
     cout << "Nie da się zrobić trojkat" << std::endl;

  if ((a * a + b * b ==  c * c) || (a * a + c * c ==  b * b) || (b * b + c * c ==  a * a))
        cout << "To jest trojkat prostokatny.";
    else
        cout << "To nie jest trojkat prostokatny.";
	return 0;
}

