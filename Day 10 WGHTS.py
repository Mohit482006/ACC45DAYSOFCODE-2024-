# cook your dish here
t=int(input())
for t in range (t):
    w,x,y,z=map(int,input().split())
    if(w==x or w==y or w==z or w==x+y or w==x+z or w==y+z or w==x+y+z):
        print("yes")
    else:
        print("no")