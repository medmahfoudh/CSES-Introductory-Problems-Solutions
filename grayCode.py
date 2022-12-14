a = int(input())
for i in range(0 , 2**a):
    x = '0'*(a-len(str(format(i,'b')))) + str(format(i,'b'))
    print(x[0]+ ''.join(['1' if x[i]!=x[i-1] else '0' for i in range(1,len(x))]))