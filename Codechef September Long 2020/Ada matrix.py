import numpy as np
import pandas as pd
for _ in range(int(input())):
    n = int(input())
    ar = []
    for _ in range(n):
        ar.append(list(map(int,input().split())))
    ar = np.array(ar)
    ar2 = ar.transpose()
    c=0
    c2=0
    for i in range(n):
        for j in range(n):
            if(ar2[i][j] != i*n+(j+1)):
                c+=1
    print(c//2 +1)