fileName = 'abc.text'
with open(fileName,'+a') as file:

    while True:
        
        inp = input()
        if inp.upper() == "DONE":
            break
        file.write(inp+'\n')
    file.close()

with open(fileName,'r+') as f:
    count = 0
    for line in f:
        count+=1
    print(count)