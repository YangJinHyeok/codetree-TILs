str = input()
answer = 0
for s in str:
    if("0" <= s <= "9"): answer += int(s)

print(answer)