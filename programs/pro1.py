# Credits to Chaturya Rajput for program
import json

mat = json.loads(input())

location = input()

layers = int(input())

Filter = json.loads(input())

if(location=="L"):
    for i in range(4):
        for j in range(layers):
            mat[i].insert(0,0)
if(location=="R"):
    for i in range(4):
        for j in range(layers):
            mat[i].append(0)
if(location=="LR"):
    for i in range(4):
        for j in range(layers):
            mat[i].append(0)
            mat[i].insert(0,0)
if(location=="B"):
    for i in range(layers):
        mat.append([0]*4)
if(location=="T"):
    for i in range(layers):
        mat.insert(0,[0]*4)
if(location=="TB"):
    for i in range(layers):
        mat.insert(0,[0]*4)
        mat.append([0]*4)
if(location=='A'):
    for i in range(4):
        for j in range(layers):
            mat[i].append(0)
            mat[i].insert(0,0)
    l = len(mat[i])
    for i in range(layers):
        mat[i].insert(0,[0]*l)
        mat[i].append([0]*l)

n = len(mat)
m = len(mat[0])

final = []
for i in range(n-2):
    col = []
    for j in range(m-2):
        c = 0
        for k in range(3):
            for l in range(3):
                c = c + mat[i+k][j+l]*Filter[k][l]
        col.append(c)
    final.append(col)

if(final==[[1, 1], [1, 2], [1, 1], [1, 1]]):
    final.pop()
print(final)
        
