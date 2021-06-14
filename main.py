#/usr/bin/python3

import os

def mkdir(path):
    folder = os.path.exists(path)
    if not folder:
        os.mkdir(path)
        strlist = path.split('. ')
        path = path + '/' + 'solution.h'
        file = open(path,'w')
        path = path.replace(' ','%20')
        sub = '|_1|[_2](_4)|[C++](_5)|_6|'
        sub = sub.replace('_1', strlist[0])
        sub = sub.replace('_2', strlist[1])
        sub = sub.replace('_5', path)
        print(sub)

if __name__ == "__main__":
    path = input()
    mkdir(path)

