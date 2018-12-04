#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  stos.py

stos = [] #zmienna globalna
SP = 0 #ostani element aktualny (stack pointer)

def push(rozmiar, dane):
    global SP, stos
    if SP < rozmiar:
        stos[SP] = dane
        SP += 1
    else:
        print("STack overflow?")
        
def pop(rozmiar):
    global SP, stos
    SP -= 1
    if SP < rozmiar:
        print(stos[SP])
    else:
        print("STack overflow?")

def main(args):
    global SP, stos
    rozmiar = 5 
    stos = [None] * rozmiar #lista elementów 
    push(rozmiar, 2)
    push(rozmiar, 3)
    push(rozmiar, 6)
    print("Wskaźnik: ", SP)

    pop(rozmiar)
    pop(rozmiar)
    pop(rozmiar)

    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
