n = int(input())
arr = [list(map(int , input().split())) for _ in range(n)]
maxNum = 0

def check(i , j):
    count = 0
    for a in range(i , i + 3):
        for b in range(j , j + 3):
            if arr[a][b] == 1:
                count += 1
    return count
    

for i in range(n):
    for j in range(n):
        if i + 2 >= n or j + 2 >= n:
            continue
        maxNum = max(maxNum , check(i , j))

print(maxNum)