N = int(input())

sji = [[0] * 201 for _ in range(201)]

for _ in range(N):
    i, j = map(int, input().split())
    i, j = i+100, j+100

    for idx_i in range(i, i+8):
        for idx_j in range(j, j+8):
            sji[idx_i][idx_j] = 1


cnt = 0

for i in range(201):
    for j in range(201):
        if sji[i][j] == 1:
            cnt += 1

print(cnt)