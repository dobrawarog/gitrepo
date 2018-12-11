#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py
#  
#  Copyright 2018  <>


from datetime import date
from osoba_obj import Osoba

class Kierowca(Osoba):
    __licznik = 0 #atrybut klasy,współdzielony przez obiekty
     def __init__(self, imie, nazwisko, kategoria):
         super().__init__(imie, nazwisko)
         self.kategoria = kategoria 
         Kierowca.licznik += 1 
         
     def __del__(self):
         Kierowca._licznik -= 1
     @staticmethod #metoda statyczna
     def KierowcaLicz():
         return Kierowca._licznik


class Samochod():
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rocznik = rocznik

        
    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rocznik
    
def main(args):
    s1 = Samochod('Fiat', 'Tipo', 2002)
    s2 = Samochod('Peugeot', '308', 2007)
    print(s1.marka, s1.model, s1.rocznik())
    print(s2.marka, s2.model, s2.rocznik())
    
    k1 = Kierowca('Adam', 'Słodowy', 'B')
    print(k1.imie, k1.kategoria)
    print(k1.KierowcaLicz())
    k2 = Kierowca('Ewa', 'Bąk', 'BC')
    print(k1.KierowcaLicz())
    k3 = Kierowca('Bartek', 'Dąk', 'BC')
    print(k1.KierowcaLicz())
    print(k2.KierowcaLicz())
    print(k3.KierowcaLicz())
    
    del(k2)
    del(k3)
    print(k1.Kierowca.licz())

    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
