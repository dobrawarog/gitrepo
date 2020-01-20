#include <iostream>

using namespace std;

int main()
{
    int a, b, NWD;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    int k;
    if ( b < 0 || b < 0)
    k = b;
    b = a % b;
    a = k;
    NWD = a;
    cin >> NWD;
    
    

    return 0;
}
