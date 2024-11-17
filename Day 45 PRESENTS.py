
T = int(input())
results = []

for _ in range(T):
    N = int(input())
    sets = N // 5  
    remainder = N % 5  
    coins_needed = 4 * sets + remainder
    results.append(coins_needed)


for result in results:
    print(result)
