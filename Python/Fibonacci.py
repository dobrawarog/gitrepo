#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Fibonacci.py
#  


#F(n) = 0 dla n = 0
#F(n) = 1 dla n = 1
#f(n) = f(n-1) + f(n-2) DLA n > 1

def czy_naturalna(n):
    if n.isdigit():
        return True
    return False
    
def main(args):
    n = input('Który wyraz ciągu?')
    while not czy_naturalna(n):
        print('Błędne dane')
        n = input('Który wyraz ciągu?')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
