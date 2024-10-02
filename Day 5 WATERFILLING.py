# cook your dish here
t=int(input())
for i  in range(t):
    b1,b2,b3=map(int,input().split())
    if(b1+b2+b3<=1):
        print("water filling time")
    else:
        print("not now")