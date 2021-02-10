T= int(input())

for i in range(T):
    a,b=input().split()
    s=input()
    a=int(a)
    b=int(b)
    destination =[a,b]
    
    commands={"L":0,"D":0,"U":0,"R":0}
    required_l=0
    required_r=0
    required_u=0
    required_d=0
    for alph in s:
        commands[alph]+=1
    if(destination[0]-0 <0):
        required_l=0-destination[0]
    if(destination[0]-0>=0):
        required_r=destination[0]
    if(destination[1]-0<0):
        required_d=0-destination[0]
    if(destination[1]-0>=0):
        required_u=destination[1] 
    print(required_u,required_r,required_l,required_d)
    if(required_l<=commands["L"] and required_d<=commands["D"] and required_r<=commands["R"] and required_u<=commands["U"] ):
        print("YES")
    else:
        print("NO")
    
