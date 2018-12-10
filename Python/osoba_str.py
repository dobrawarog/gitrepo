#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  osoba_str.py

#  
def zapisz_dane(imie, nazwisko):
    osoba = [imie, nazwisko]
    return osoba

def zapisz_dane2(imie, nazwisko):
    osoba = {'imie' : imie, 'nazwisko': nazwisko}

def main(args):
    ol = zapisz_dane('Adam', 'Słodowy')
    print(o1[0]
    
    o2 = zapisz dane2('Ewa', 'Kos')
    print(o2['imie'], o2['nazwisko'])

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
