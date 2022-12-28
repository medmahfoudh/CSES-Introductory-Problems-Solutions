from itertools import combinations
a,b = int(input()) , [int(i) for i in input().split(' ')]

if len(b)>1:
    print(min([abs(sum(b)-(2*sum(list(j)))) for i in range(1 , int(a/2)+1) for j in set(combinations(b,i))]))
else:
    print(b[0])