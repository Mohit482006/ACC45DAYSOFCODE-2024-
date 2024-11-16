
def calculate_total_duration(T, test_cases):
    results = []
    for case in test_cases:
        N, A, B = case
       
        num_odd = (N + 1) // 2
        num_even = N // 2      
        total_duration = num_odd * B + num_even * A
        results.append(total_duration)
    return results
T = int(input())
test_cases = [tuple(map(int, input().split())) for _ in range(T)]

for result in calculate_total_duration(T, test_cases):
    print(result)
