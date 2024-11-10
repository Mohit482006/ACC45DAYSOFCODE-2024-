
import sys
input = sys.stdin.read

def solve():
    data = input().split()
    index = 0
    T = int(data[index])
    index += 1
    results = []

    for _ in range(T):
        N, M = int(data[index]), int(data[index + 1])
        index += 2
        A = list(map(int, data[index:index + N]))
        index += N
        
        max_distance = 0
        for Ai in A:
            max_distance += max(abs(Ai - 1), abs(Ai - M))
        
        results.append(str(max_distance))
    
    sys.stdout.write("\n".join(results) + "\n")
solve()
