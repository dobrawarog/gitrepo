/*
 * liczby1.cpp
 * 
 * Copyright 2019  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

int main(int argc, char **argv)
{
    float a, b, c;
    cout << "Podaj 3 różne liczby:"<<endl;
    cin >> a >> b >> c;
    if (a>=b && a>=c)
    {
        if (b>=c)
        {
            cout<<a<<" "<<b<<" "<<c;
        }
    else
        {
            cout<<a<<" "<<c<<" "<<b;
        }
    }
    else if (b>=c && b>a)
    {
        if (a>=c)
        {
            cout << b<<" "<<a<<" "<<c;
        }
        else
        {
            cout << b <<" "<<c<<" "<<a;
        }
    }
    else if (c>b && c>a && a>=b)
    {
        cout << c<<" "<<a<<" "<<b;
    }
    else
    {
        cout << c<<" "<<b<<" "<<a;
    }
	return 0;
}

