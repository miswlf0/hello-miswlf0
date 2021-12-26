import os
import time

sw = 1

def say_hello(val):
    print("Hi, say hello world from python, val is", (val))

def say_hi(val):
    print("Hi, say hi from python, val is", (val))
    return 0

def main():
    global sw
    if sw <= 0:
        say_hi('zero or nagative')
    else:
        say_hi('definitely positive')
    return  

if __name__ == '__main__':
    main()

