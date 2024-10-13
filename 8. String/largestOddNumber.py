num = '123428897222'
i = len(num)-1
while(i >= 0 and int(num[i]) % 2 == 0):
    num = num[:-1]
    i-=1

print(num)