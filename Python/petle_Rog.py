#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle_Rog.py
#  

def cw1():
    suma = 0
    liczba = int(input("Podaj liczbę: "))
    while suma < 75:
        suma += liczba
        print(suma)
        liczba = int(input("Podaj liczbę: "))
        print() 
    print("Suma liczb:", suma)
    return 
    
    
def cw2():
    n = int(input("podaj zakres dolny: "))
    m = int(input("podaj zakres górny: "))
    for i in range(n, m + 1):
        
        print("{}".format(i), end=' ')
    return 
    
def cw3():
    
    n = int(input("Liczba : "))
    for i in range(n + 1):
        print(i*i)
    return 
    

def main(args):
    cw3()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
