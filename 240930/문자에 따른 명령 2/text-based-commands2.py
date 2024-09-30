x, y = 0, 0
dir_num = 3

dx = [1, 0, -1, 0]
dy = [0, -1, 0, 1]

arr = input()

for i in range(len(arr)):
    if arr[i] == 'L':
        dir_num = (dir_num - 1 + 4) % 4
    elif arr[i] == 'R':
        dir_num = (dir_num + 1) % 4
    else:
        x += dx[dir_num]
        y += dy[dir_num]

print(x, y)