import numpy as np
from random import randint, shuffle

numberof = [9, 13, 12, 12, 12, 12, 12, 12, 9, 9]
mm = []
for i in range(10):
    mm += [str(i) for _ in range(numberof[i])]



def find(arr, n):
    res = np.where(arr == n)
    return list(zip(res[0],res[1]))

def go8way(cord):
    x, y = cord
    res = []
    if x-1 >= 0:
        if y-1 >= 0:
            res.append((x-1,y-1))
        if y+1 < 14:
            res.append((x-1, y+1))
        res.append((x-1,y))
    if y-1 >= 0:
        res.append((x,y-1))
    if y+1 < 14:
        res.append((x, y+1))
    if x+1 < 8:
        if y-1 >= 0:
            res.append((x+1,y-1))
        if y+1 < 14:
            res.append((x+1, y+1))
        res.append((x+1,y))
    return res

def xxxx(cor, s):
    
    if s == '':
        return True
    cors = go8way(cor)
    ret = False
    for (x, y) in cors:
        if not ret and m[x][y] == s[0]:
           ret = xxxx((x,y), s[1:])
    return ret


count = 1
max_c = 1
while count-1 < 8140:
    shuffle(mm)
    m = np.array(mm)
    m = m.reshape(8,14)
    # m = np.array([[str(randint(0,9)) for x in range(14)] for y in range(8)])
    count = 1
    q = []
    q += find(m, str(count)[0])
    
    while True:
        if len(q) == 0:
            break
        cor, q = q[0], q[1:]
        if xxxx(cor, str(count)[1:]):
            q = []
            count += 1
            q += find(m, str(count)[0])
    if count > max_c:
        max_c = count
        print(m)
        print([ len(np.where(m == str(i))[0]) for i in range(10) ])
        print(count)
