#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kompresja1.py
#  

def wspolczynnik(Vk, Vnk):
    Rc = float(Vk) / float(Vnk) * 100
    R2c = (1 - float(Vk) / float(Vnk)) * 100

    print('Zmniejszenie danych o:', Rc)
    print('Zaoszczędzone miejsce:', R2c)
    
def main(args):
	for i in range(2):
		Vk = input('Dane po kompresji: ')
		Vnk = input('Dane przed kompresją: ')
		wspolczynnik(Vk, Vnk)
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
