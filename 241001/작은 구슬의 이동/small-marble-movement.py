n, t = map(int, input().split())
r, c, d = tuple(input().split())
r, c = int(r)-1, int(c)-1

dxs = [0, 1, -1, 0]
dys = [1, 0, 0, -1]

mapper = {
    'R' : 0,
    'D' : 1,
    'U' : 2,
    'L' : 3
}

dir_num = mapper[d]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n

for _ in range(t):
    nx, ny = r + dxs[dir_num], c + dys[dir_num]
    if in_range(nx, ny):
        r, c = nx, ny
    else:
        dir_num = 3 - dir_num
    
print(r+1, c+1)