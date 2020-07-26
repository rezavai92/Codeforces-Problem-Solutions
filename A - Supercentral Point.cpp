n=int (input())
l = set(())
for f in range (n) : 
    x,y= input().split()
    x=int (x)
    y= int (y)
    l.add((x,y))



total =0

for f in l:
    lower =False
    upper = False
    right = False
    left = False 
    
    for i in l:
        if (f[0]==i[0] and f[1]<i[1] ):
            
            upper =True
        elif (f[0]==i[0]  and f[1] > i[1]):
            
            lower = True
        elif (f[0]>i[0]  and f[1] == i[1]):
            left = True
            
            
        elif (f[0]<i[0]  and f[1] ==i[1]):
            
            right = True
    if (left and right and upper and lower ):
        total +=1
print (total)