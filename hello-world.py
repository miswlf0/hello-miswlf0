#!/usr/bin/python3
import os
from datetime import date
from datetime import datetime

def main():
    today = date.today()
    print('Today is ', datetime.now())
    print('Hello {} from miswlf-hello'.format(os.environ['USER']))
    return

if __name__ == '__main__':
    main()
