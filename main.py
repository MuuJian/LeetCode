import os

def mkdir(path):
    folder = os.path.exists(path)
    if not folder:
        os.mkdir(path)
        path = path + '/' + 'solution.h'
        file = open(path,'w')
        print(path.replace(' ','%20'))

if __name__ == "__main__":
    path = input()
    mkdir(path)