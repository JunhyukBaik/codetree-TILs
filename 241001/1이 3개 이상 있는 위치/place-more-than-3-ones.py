n = int(input())
dxs = [1, 0, -1, 0]
dys = [0, -1, 0, 1]

arr = [list(map(int, input().split())) for _ in range(n)]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n

def find_cnt(x, y):
    cnt = 0
    for dx, dy in zip(dxs, dys):
        nx = x + dx
        ny = y + dy
        if in_range(nx, ny) and arr[nx][ny] == 1:
            cnt += 1
    return cnt

result = 0

for i in range(n):
    for j in range(n):
        if find_cnt(i,j) >= 3:
            result += 1

print(result)