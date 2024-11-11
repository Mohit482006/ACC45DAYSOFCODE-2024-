
import math


T = int(input())

for _ in range(T):
    
    N, X = map(int, input().split())
    
  
    health = list(map(int, input().split()))
    
  
    single_target_time = sum(math.ceil(h / X) for h in health)
    
    
    multi_target_time = max(health)
    
  
    print(min(single_target_time, multi_target_time))