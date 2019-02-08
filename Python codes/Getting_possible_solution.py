arr = [0]*16
arr[0]=1
a = [3,5,10]
for i in range(3):
    for j in range(a[i],16):
        if(arr[j-a[i]]!=0):
            arr[j] = arr[j]+arr[j-a[i]]
    
print(arr[15])