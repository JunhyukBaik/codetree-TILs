N = int(input())

x, y = 0, 0
dx, dy = [1, 0, -1, 0], [0, -1, 0, 1]

for _ in range(N):
    xx, yy = tuple(input().split())
    yy = int(yy)

    if xx == 'E':
        m_dir = 0
    elif xx == 'S':
        m_dir = 1
    elif xx == 'W':
        m_dir = 2
    elif xx == 'N':
        m_dir = 3

    x += dx[m_dir] * yy
    y += dy[m_dir] * yy

print(x, y)