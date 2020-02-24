#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szyfrCezara.py

def szyfruj(tekst, klucz):
    szyfr = ' '
    for z in tekst.lower():
        kod = ord(z) + klucz 
        if kod > 122:
            kod -= 26
        szyfr += chr(kod)
    return szyfr 


def deszyfruj(tekst, klucz):
    szyfr = ' '
    for z in tekst.lower():
        kod = ord(z) + klucz 
        if kod < 97:
            kod += 26
        szyfr += chr(kod)
    return szyfr 

def main(args):
    tekst = input('Podaj tekst: ')
    klucz = input('Podaj klucz: ')
    klucz = int(klucz) % 26;
    szyfrogram = szyfruj(tekst, klucz)
    print(deszyfruj) 
    print(szyfrogram)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
