# cook your dish here
T = int(input())
for _ in range(T):
    N = int(input())
    
   
    if N < 2:
       
        print(0)
    else:
        
        tuesdays = 1 + (N - 2) // 7
        print(tuesdays)
