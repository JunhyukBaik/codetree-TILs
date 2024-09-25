n = int(input())

white, black = 0, 0

tile = [0] * 200001
start = 100000

#print(tile[start])

for _ in range(n):
    x, direction = input().split()
    x = int(x)

    if direction == 'R':
        for i in range(start, start+x):
            tile[i] = 2
        start = start + x-1

    else:
        for i in range(start, start-x, -1):
            tile[i] = 1
        start = start - x


for i in range(200001):
    if tile[i] == 1:
        white += 1
    elif tile[i] == 2:
        black += 1

print(white, black)