#!/usr/bin/python3
import os
import time
from datetime import date
from datetime import datetime

sw = 1

def say_hello(val):
    print("Hi, say hello world from python, val is", (val))
    return 0

def say_hi(val):
    print("Hi, say hi from python, val is", (val))
    return 0

def main():
    global sw

    today = date.today()
    print('today is ', today)

    now = datetime.now()
    curr_time = now.strftime('%H:%M:%S')
    print('curr time = ', curr_time)

    if sw <= 0:
        say_hi('zero or nagative')
    else:
        say_hi('definitely positive')
    return  

if __name__ == '__main__':
    main()

