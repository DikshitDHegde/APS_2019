data = ['a','b','c']
set = len(data)
size = 2**set
for i in range(size):
    for j in range(set):
        if(i and (1<<j)):
            print(data[j],end='')
    print("")