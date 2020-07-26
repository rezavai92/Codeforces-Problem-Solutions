def SumOfList(l):
    c=0
    for f in l:
        c+=f
    return c
        

t=int(input())
 
for f in range(t):
    n=int(input())
    li=list()
    for i in range (n):
        li.append(2**(i+1))
    
    s=int (len(li)/2)
    li1=[]
    for j in range(s-1):
        li1.append(li.pop(0))
    li1.append(li.pop())
    
    a1=SumOfList(li1)
    a2=SumOfList(li)
    diff=a1-a2

    print(diff)