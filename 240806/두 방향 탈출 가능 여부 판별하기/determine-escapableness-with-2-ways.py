# 변수 선언 및 입력
n, m = tuple(map(int, input().split()))
grid = [
    list(map(int, input().split()))
    for _ in range(n)
]

visited = [
    [0 for _ in range(m)]
    for _ in range(n)
]

# 주어진 위치가 격자를 벗어나는지 여부를 반환합니다.
def in_range(x, y):
    return 0 <= x and x < n and 0 <= y and y < m


# 주어진 위치로 이동할 수 있는지 여부를 확인합니다.
def can_go(x, y):
    if not in_range(x, y):
        return False
    
    if visited[x][y] or grid[x][y] == 0:
        return False
    
    return True


def dfs(x, y):
    dx, dy = [0, 1], [1, 0]
    
    # 탐색을 시작하기 전에 해당 위치를 방문했음을 표시해줍니다.
    visited[x][y] = 1
    
    for i in range(2):
        new_x, new_y = x + dx[i], y + dy[i]
        
        if can_go(new_x, new_y):
            dfs(new_x, new_y)
            
            
dfs(0, 0)

print(visited[n - 1][m - 1])