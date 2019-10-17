/*
 * proba.cxx
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
      int a,b,c,d,n1,n2,n3,n4;
 

 
  cout << "Podaj piewrsza liczbe = ";
  cin >> a;
 
  cout << "Podaj druga liczbe = ";
  cin >> b;
 
  cout << "Podaj trzecia liczbe = ";
  cin >> c;
 
  cout << "Podaj czwarta liczbe = ";
  cin >> d;
 
if(a>b&&a>c&&a>d)
    n1=a;
if(a>b&&a>c&&a<d)
    n2=a;
if(a>b&&a<c&&a<d)
    n3=a;
if(a<b&&a<c&&a<d)
    n4=a;
 
 
 
if(b>a&&b>c&&b>d)
    n1=b;
if(b>a&&b>c&&b<d)
    n2=b;
if(b>a&&b<c&&b<d)
    n3=b;
if(b<a&&b<c&&b<d)
    n4=b;
 
 
 
if(c>a&&c>b&&c>d)
    n1=c;
if(c>a&&c>b&&c<d)
    n2=c;
if(c>a&&c<b&&c<d)
    n3=c;
if(c<a&&c<b&&c<d)
    n4=c;
 
 
 
if(d>a&&d>b&&d>c)
    n1=d;
if(d>a&&d>b&&d<c)
    n2=d;
if(d>a&&d<b&&d<c)
    n3=d;
if(d<a&&d<b&&d<c)
    n4=d;
 
	
	return 0;
}

