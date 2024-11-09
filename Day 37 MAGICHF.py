
T = int(input())

for _ in range(T):
    
    N, X, S = map(int, input().split())
    
   
    coin_position = X
    
  
    for _ in range(S):
        A, B = map(int, input().split())
        
        
        if coin_position == A:
            coin_position = B
        
        elif coin_position == B:
            coin_position = A
    
    
    print(coin_position)
