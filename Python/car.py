#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py
#  
#  Copyright 2018  <>


from datetime import date,
from osoba_obj import Osoba

class Kierowca(Osoba):
     def __init__(self, imie, nazwisko, kategoria):
         super().__init__(imie, nazwisko)
         self.kategoria = kategoria 
     

class Samochod():
    def __init__(marka, model, rok_produkcji):
        self.marka = marka
        self.model = model
        self.rok = rocznik
        self.kierowca = kierowca
        
def wiek(self):
    dzis = date.today()
    return dzis.year - self.rok
def main(args):
    s1 = Samochod('Fiat', 'Tipo', '2002')
    print(s1.marka, s1.model, s1.wiek())
    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
