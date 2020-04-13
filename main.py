import os

def mkdir(path):
    folder = os.path.exists(path)
    if not folder:
        os.mkdir(path)
        path = path + '/' + 'solution.h'
        file = open(path,'w')
        path = path.replace(' ','%20')
        sub = '''|a|[b](c)|[C++](d)|e|'''
        sub = sub.replace('d', path)
        print(sub)

if __name__ == "__main__":
    path = input()
    mkdir(path)

