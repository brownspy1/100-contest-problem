n = 5
febo = [0, 1]
for i in range(n):
    next_val = febo[-1] + febo[-2]
    febo.append(next_val)

for i in febo:
    print(i,end=" ")


    