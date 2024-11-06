# cook your dish here
T = int(input())
results = []

for _ in range(T):
    
    A, B = map(int, input().split())
    
    
    C = 21 - (A + B)
    
    
    if 1 <= C <= 10:
        results.append(C)
    else:
        results.append(-1)

for result in results:
    print(result)
