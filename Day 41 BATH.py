
T = int(input())
for _ in range(T):
  
    X, Y = map(int, input().split())
    
    
    water_per_person = 2 * Y
    max_people = X // water_per_person
    
  
    print(max_people)