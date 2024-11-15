
T = int(input())


for _ in range(T):
  
    N, X, P = map(int, input().split())
    
  
    score = 4 * X - N
    
    
    if score >= P:
        print("PASS")
    else:
        print("FAIL")