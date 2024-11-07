# Number of test cases
t = int(input())

for i in range(t):
    x, a, b = map(int, input().split())
    y = a * 1 +  b * 2
    if y >= x:
        print("qualify")
    else:
        print("notqualify")
