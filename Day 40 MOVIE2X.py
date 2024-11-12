
X, Y = map(int, input().split())


time_at_double_speed = Y // 2
time_at_normal_speed = X - Y
total_time = time_at_double_speed + time_at_normal_speed

print(total_time)