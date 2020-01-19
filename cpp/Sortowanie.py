#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Sortowanie.py

from random import randint

def wypelnij(lista, n):
    for i in range(n):
        lista.append(randint(0,100))
        
def wyswietl(lista):
    for i in lista:
        print(i, end='')
        print()
def zamien(tab, j):
    tmp = tab[j]
    tab[j] = tab[i]
    tab[i] = tmp

def sort_bubble(tab):
    n = len(tab)
    for i in range(n-1, 0, -1):
        for j in range(0, i):
            if tab[j] < tab[j+1]:
                zamien(tab, j)
                
def selection_sort(tab):
    for i in range(0, n+1, 1):
        k = i 
        for j in range( 1, n, j+1):
            if tab[i] < tab[j]:
                zamien(tab, j)
    

#void selection_sort(int tab[], int n){
 #   int ile = 0;
  #  int i, j, k;
   # for(i=1; i<n; i++){
    #    k = i;
     #   for (j=i+1; j<n; j++){
      #      if (tab[j]<tab[k])
       #     k=j;
        #} 
        #zamien(tab[k], tab[i]);
        #ile ++;
    #}
     #cout << "Zamian: "<< ile << endl;
#}

def main(args):
    n = int(input('Ile wylosować liczb? '))
    lista = []
    wypelnij(lista, n)
    wyswietl(lista)
    sort_bubbles(lista)
    wyswietl(lista)
    selection_sort(lista)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
