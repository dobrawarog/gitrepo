#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
float czy_trojmian ( float a, float b, float c, float x)
{
	if ( a * pow (x,2) + b * x + c ==  0)
	return 1;
	else
	return 0;
}
float czy_miejsca_zerowe ( float delta, float x, float x1, float x2)
{
	if ( delta > 0)
	return 1;
	else
	return 0;
}
int main ()
{
float a,b,c;
float delta;
float x, x1, x2;

cout << " Podaj a :";
cin >> a;
cout << " Podaj b : ";
cin >> b;
cout << "Podaj c : ";
cin >> c;

if (a==0)
cout << " To nie jest trójmian kwadratowy ";
else
{
delta == b*b - 4*a*c;
if (delta>0)
{
x1==(-b- sqrt(delta))/(2*a);
x2==(-b+sqrt(delta))/(2*a);
cout << "Trójmian ma dwa miejsca zerowe:" << endl
<< " x1 = " << x1 << endl
<< " x2 = " << x2 << endl;
}
else
if (delta==0)
{
x==(-b)/(2*a);
cout << "Trójmian jedno miejsce zerowe:" << endl
<< " x0 = " << x << endl;

}
else
cout << " Trójmian nie ma miejsc zerowych! ";
}

return 0;
}
