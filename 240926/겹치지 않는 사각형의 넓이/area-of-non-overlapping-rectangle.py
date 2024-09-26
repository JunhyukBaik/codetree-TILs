Ax1, Ay1, Ax2, Ay2 = map(int, input().split())
Bx1, By1, Bx2, By2 = map(int, input().split())
Mx1, My1, Mx2, My2 = map(int, input().split())

OFFSET = 1000

nemo = [[0] * 2001 for _ in range(2001)]

Ax1, Ay1, Ax2, Ay2 = Ax1+OFFSET, Ay1+OFFSET, Ax2+OFFSET, Ay2+OFFSET
Bx1, By1, Bx2, By2 = Bx1+OFFSET, By1+OFFSET, Bx2+OFFSET, By2+OFFSET
Mx1, My1, Mx2, My2 = Mx1+OFFSET, My1+OFFSET, Mx2+OFFSET, My2+OFFSET

for i in range(Ax1, Ax2):
    for j in range(Ay1, Ay2):
        nemo[i][j] = 1

for i in range(Bx1, Bx2):
    for j in range(By1, By2):
        nemo[i][j] = 1

for i in range(Mx1, Mx2):
    for j in range(My1, My2):
        nemo[i][j] = 0

x1 = min(Ax1, Bx1)
x2 = max(Ax2, Bx2)
y1 = min(Ay1, By1)
y2 = max(Ay2, By2)

cnt = 0

for i in range(x1, x2):
    for j in range(y1, y2):
        cnt = cnt + nemo[i][j]

print(cnt)